#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(){};

Base::~Base(){};

Base * Base::generate()
{
    std::srand(std::time(0));

    int random = std::rand() % 3;

    switch (random)
    {
    case 0:
        return (new A);
    case 1:
        return (new B);
    case 2:
        return (new C);
    }
    return (NULL);
}

void Base::identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "The pointer is type A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "The pointer is type B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "The pointer is type C\n";
    else
        std::cout << "Unknown pointer type\n";
}

void Base::identify(Base &p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type: A\n";
        return;
    } catch (const std::exception& e) {std::cerr << "Cast failed: " << e.what() << "\n";}
    
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "Type: B\n";
        return;
    } catch (const std::exception& e) {std::cerr << "Cast failed: " << e.what() << "\n";}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "Type: C\n";
        return;
    } catch (const std::exception& e) {std::cerr << "Cast failed: " << e.what() << "\n";}

    std::cout << "Unknown type\n";
}