#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
	PmergeMe merge;
	try
	{
		merge.parseInput(ac, av);
		merge.sortAndDisplay();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}