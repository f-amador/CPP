#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cerr << "ERROR: Not Enough Arguments\n";
		return 1;
	}
	std::vector<int> vec2;
	std::deque<int> deq2;
	for (int i = 1; av[i]; i++)
	{
		long tmp;
		for (int j = 0;av[i][j]; j++)
		{
			if (!std::isdigit(av[i][j]))
			{
				std::cerr << "ERROR" << std::endl;
				return 1;
			}
		}
		std::istringstream str(av[i]);
		str >> tmp;
		if (tmp > 2147483647 || tmp  < 0)
		{
			std::cerr << "ERROR" << std::endl;
			return 1;
		}
		else
		{
			std::vector<int>::iterator it = std::find(vec2.begin(), vec2.end(), tmp);
			if (it != vec2.end())
			{
				std::cerr << "ERROR" << std::endl;
				return 1;
			}
		}
		vec2.push_back(tmp);
		deq2.push_back(tmp);
	}
	for (int i = 0; i < 3; i++)
		std::cout << vec2[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << deq2[i] << " ";
	std::cout << std::endl;
}