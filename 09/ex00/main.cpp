#include "BitcoinExchange.hpp"

void printAllDates(const std::map<int, std::string>& data) {
    std::map<int, std::string>::const_iterator it;
    
    for (it = data.begin(); it != data.end(); ++it) {
        int year, month, day;
        decompressDate(it->first, year, month, day);
        
        std::cout << year << "-" << month << "-" << day 
                  << " : " << it->second << std::endl;
    }
}

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "No input file received!" << std::endl;
        return (1);
    }

    std::map<int, std::string> db;
    try
    {
       std::string str = "data.csv";
        db = loadDataBase(const_cast<char *>(str.c_str()));
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }

    std::map<int, std::string> input;
    try
    {
        input = loadDataBase(av[1]);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    printAllDates(input);
}