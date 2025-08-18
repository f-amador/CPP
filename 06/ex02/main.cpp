#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class D: public Base{};

int main(void)
{
    A teste1;
    B teste2;
    C teste3;
    D teste4;
    Base base;
    Base *gen = base.generate();
    base.identify(&teste1);
    base.identify(&teste2);
    base.identify(&teste3);
    base.identify(&teste4);
    base.identify(gen);
    base.identify(teste1);
    base.identify(teste2);
    base.identify(teste3);
    base.identify(teste4);
    delete gen;
}