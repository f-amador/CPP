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

    char c = '|';
    std::string line;
    std::map <int, std::string> db;
    if (static_cast<std::string>(file) == "data.csv")
    {
        std::getline(input, line);
        c = ',';
    }
    while(std::getline(input, line, c))
    {
        int compress = compressDate(line);
        std::getline(input, line);
        db[compress] = line;
    }
    return (db);
}