#include <iostream>

class A
{
private:
    int num1, num2;

public:
    A(int a, int b)
    {
        num1 = 10;
        num2 = 20;
    }

public:
    friend void show(A obj);
};
void show(A obj)
{
    std::cout << "num1 = " << obj.num1 << std::endl;
    std::cout << "num2 = " << obj.num2 << std::endl;
}
int main()
{
    A a1(10, 20);
    show(a1);

    return 0;
}