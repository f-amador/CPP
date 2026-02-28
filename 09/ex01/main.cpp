#include "RPN.hpp"
int main(int ac, char *av[])
{
    (void)av;
    if (ac != 2)
    {
        std::cerr << "ERROR\nInvalid number of arguments\nUsage: ./RPN \" RPN EXPRESSION\"" << std::endl;
        return(1);
    }
    int itmp, res = 0;
    char ctmp;
    std::stack<int> stack;
    std::istringstream parse(av[1]);
    for(int i = 0; i < 2; i++)
    {
        parse >> itmp;
        if (itmp > 9 || itmp < 0)
        {
            std::cerr << "ERROR INPUT\n";
            return (1);
        }
        else
            stack.push(itmp);
    }
    for(;!parse.eof();)
    {
        parse >> ctmp;
        if (parse.eof())
            break ;
        if (ctmp > '9' || ctmp < '0')
        {
            if (stack.size() < 2)
            {
                std::cerr << "ERROR" << std::endl;
                return 1;
            }
            res = stack.top();
            stack.pop();
            switch (ctmp)
            {
                case '+':
                    res = stack.top() + res;
                    stack.pop();
                    stack.push(res);
                    break;
                case '-':
                    res = stack.top() - res;
                    stack.pop();
                    stack.push(res);
                    break;
                case '*':
                    res = stack.top() * res;
                    stack.pop();
                    stack.push(res);
                    break;
                case '/':
                    if (res == 0)
                    {
                        std::cerr << "ERROR:DIVISION BY 0\n";
                        return (1);
                    }

                    res = stack.top() / res;
                    stack.pop();
                    stack.push(res);
                    break;
                default:
                    std::cerr << "ERROR OPERATOR\n";
                    return (1);
            }
        }
        else
                stack.push(ctmp - '0');
    }
    if (stack.size() != 1)
    {
        std::cerr << "ERROR\n";
        return (1);
    }
    std::cout << stack.top() << std::endl;
}