#include "MutantStack.hpp"


int main(void)
{
	std::cout << "-----------------------------------------------LIST TEST ------------------------------------------------------" << std::endl;
	std::list<int> test;
	test.push_back(5);
	test.push_back(17);
	std::cout << test.back() << std::endl;
	test.pop_back();
	std::cout << test.size() << std::endl;
	test.push_back(3);
	test.push_back(5);
	test.push_back(737);
	test.push_back(0);
	std::list<int>::iterator lit = test.begin();
	std::list<int>::iterator lite = test.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::cout << "-----------------------------------------------STACK TEST ------------------------------------------------------" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
