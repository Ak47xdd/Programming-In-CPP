#include <iostream>

class A
{
public:
    void show_a()
    {
        std::cout << "This is class A" << std::endl;
    }
};
class B : public A
{
public:
    void show_b()
    {
        std::cout << "This is class B" << std::endl;
    }
};
class C : public A
{
public:
    void show_c()
    {
        std::cout << "This is class C" << std::endl;
    }
};
int main()
{
    B b1;
    b1.show_a();
    b1.show_b();

    C c1;

    c1.show_a();
    c1.show_c();

    return 0;
}