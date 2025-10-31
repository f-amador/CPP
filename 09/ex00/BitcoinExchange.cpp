#include "BitcoinExchange.hpp"
#include <iomanip>

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    _map = other._map;
}

const BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        _map = other._map;
    }
    return (*this);
}

const char *NoDbFound::what() const throw()
{
	return ("No Db Found!\n");
}

const char *InvalidDate::what() const throw()
{
	return ("Date doesn't exist!\n");
}

const char *InvalidValue::what() const throw()
{
	return ("Invalid Value!\n");
}

int compressDate2(std::string line)
{
    std::istringstream iss(line);
    int year = 0, month = 0, day = 0;
    char garbage;

    iss >> year >> garbage >> month >> garbage >> day;
    if (day <= 0 || day >= 32 || month  <= 0 || month >= 13 || year < 0)
    {
        std::cerr << "Error: bad input => " + line << std::endl;
        return -1;
    }
    if (day == 29 && month == 2 && ((year - 8) % 4))
    {
        std::cerr << "Error: bad input => " + line << std::endl;
        return -1;
    }
    return((year << 16) | (month << 8) | day);
}

int compressDate(std::string line)
{
    std::istringstream iss(line);
    int year = 0, month = 0, day = 0;
    char garbage;

    iss >> year >> garbage >> month >> garbage >> day;
    return((year << 16) | (month << 8) | day);
}

void decompressDate(int compressed, int &year, int &month, int &day)
{
    year = (compressed >> 16) & 0xFFFF;
    month = (compressed >> 8) & 0xFF;
    day = compressed & 0xFF;
}

bool validBTC(std::string line)
{
    bool hasDecimal = false;
    for (int i = 0; line[i]; i++)
    {
        if (!std::isdigit(line[i]) && !std::isspace(line[i]) && line[i] != '.')
            return false;
        if (line[i] == '.')
        {
            if (hasDecimal)
                return false;
            hasDecimal = true;
        }
    }
    if (line.empty())
        return (false);
    double tmp = atof(line.c_str());
    return (tmp >= 0 && tmp <= 1000);
}


std::string findClosestDate(const std::string &targetDate, std::map<int, std::string> &db)
{
    int targetKey = compressDate2(targetDate);

    std::map<int, std::string>::iterator it = db.lower_bound(targetKey);

    if (it == db.begin())
        return it->second;
    if (it == db.end())
    {
        --it;
        return it->second;
    }

    --it;
    return it->second;
}
void printResult(const std::string &line, const std::string &tmp, std::map<int, std::string> &db)
{
    double value = atof(findClosestDate(tmp, db).c_str()) * atof(line.c_str()); 

    std::cout << std::fixed << std::setprecision(2) << tmp + " => " + line + " => " << value << std::endl;
}

std::map<int, std::string> loadDataBase(char *file, std::map<int, std::string> db)
{
    std::ifstream input(file);
    if (!input.is_open())
        throw NoDbFound();
    bool flag = (static_cast<std::string>(file) == "data.csv");
    std::map <int, std::string> newdb;
    std::string line;
    char c = '|';
    if (flag)
        c = ',';
    std::getline(input, line);
    while(std::getline(input, line, c))
    {
        std::string tmp = line;
        int compress;
        if (flag)
            compress = compressDate(line);
        else
            compress = compressDate2(line);
        std::getline(input, line);
        if (!flag)
        {
            if(!validBTC(line))
                std::cerr << "Error: not a number " << line << std::endl;
            else
            {
                int i = atoi(line.c_str());
                if (i > 1000)
                    std::cerr << "Error: too large a number." << std::endl; 
                else if (i < 0)
                    std::cerr << "Error: not a positive number." << std::endl;
                else if (compress != -1)
                     printResult(line, tmp, db);
            }
        }
        (void)db;
        newdb[compress] = line;
    }
    return (newdb);
}
