#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>

class BitcoinExchange
{
    std::map<float, std::string> _map;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        const BitcoinExchange &operator=(const BitcoinExchange &other);

};

class NoDbFound : public std::exception
{
	public:
		virtual const char* what() const throw();
};

class InvalidDate : public std::exception
{
	public:
		virtual const char* what() const throw();
};

class InvalidValue : public std::exception
{
	public:
		virtual const char* what() const throw();
};


int compressDate(std::string line);
int compressDate2(std::string line);
void decompressDate(int compress, int &year, int &month, int &day);

std::map<int, std::string> loadDataBase(char *file, std::map<int, std::string> db);