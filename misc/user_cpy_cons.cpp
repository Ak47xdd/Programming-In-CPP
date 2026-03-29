#include <iostream>

class A
{
public:
    int x;

public:
    A()
    {
        std::cout << "Default constructor called" << std::endl;
    }
    A(const A &a)
    {
        std::cout << "Copy constructor called" << std::endl;
        x = a.x;
    }
};

int main()
{
    A a1;
    a1.x = 10;
    A a2(a1);

    std::cout << a1.x << std::endl;
    std::cout << a2.x << std::endl;
    return 0;
}
