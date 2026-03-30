#include <iostream>

class A
{
    int k = 1000;
    float salary = 80000;
};
class B : public A
{
    float bonus = 8000;

    void ts()
    {
        std::cout << "Total Salary :" << (salary + bonus);
    }
};
int main()
{
    B b1;

    std::cout << "Salary : " << b1.salary << std::endl;
    std::cout << "Bonus : " << b1.bonus << std::endl;
    b1.ts();

    return 0;
}
