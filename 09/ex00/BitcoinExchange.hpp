#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

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

int compressDate(std::string line);
void decompressDate(int compress, int &year, int &month, int &day);

std::map<int, std::string> loadDataBase(char *file);