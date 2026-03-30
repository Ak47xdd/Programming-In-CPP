#include <iostream>

class A
{
public:
    int a;

    void get()
    {
        std::cout << "Enter value of a : " << std::endl;
        std::cin >> a;
    }
};
class B : public A
{
public:
    int b;

    void get_b()
    {
        std::cout << "Enter value of b : " << std::endl;
        std::cin >> b;
    }
};
class C : public B
{
public:
    int c;

    void get_c()
    {
        std::cout << "Enter value of c : " << std::endl;
        std::cin >> c;
    }
    void sum()
    {
        int ans = a + b + c;
        std::cout << "Sum of a, b and c is : " << ans << std::endl;
    }
};
int main()
{
    C c1;

    c1.get();
    c1.get_b();
    c1.get_c();
    c1.sum();

    return 0;
}