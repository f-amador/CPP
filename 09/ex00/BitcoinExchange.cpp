#include "BitcoinExchange.hpp"

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

int compressDate(std::string line)
{
    std::istringstream iss(line);
    int year, month, day;
    char garbage;

    iss >> year >> garbage >> month >> garbage >> day;
    return((year << 9) | (month << 5) | day);
}

void decompressDate(int compressed, int &year, int &month, int &day)
{
    year = (compressed >> 9) & 0x7FFF;
    month = (compressed >> 5) & 0x0F;
    day = compressed & 0x1F;
}

std::map<int, std::string> loadDataBase(char *file)
{
    std::ifstream input(file);
    if (!input.is_open())
        throw NoDbFound();

    std::map <int, std::string> db;
    std::string line;
    char c = '|';
    if (static_cast<std::string>(file) == "data.csv")
        c = ',';
    std::getline(input, line);
    while(std::getline(input, line, c))
    {
        int compress = compressDate(line);
        std::getline(input, line);
        db[compress] = line;
    }
    return (db);
}

bool parseInput(std::map<int, std::string>input)
{
    int year, month, day;
    std::map<int, std::string>::iterator it = input.begin();
    // for(;it != input.end(); it++)
    // {
    //     decompressDate(it->first, year, month, day);
    //     if (!validDate())
    // }
    return (1);
}