#include <iostream>

class A
{
public:
    void display_A()
    {
        std::cout << "This is class A" << std::endl;
    }
};
class B : public A
{
public:
    void display_B()
    {
        std::cout << "This is class B" << std::endl;
    }
};
class C : public A, public B
{
public:
    void display_C()
    {
        std::cout << "This is class C" << std::endl;
    }
};