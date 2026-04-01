#include <iostream>

class A
{
private:
    int x;

public:
    A()
    {
        x = 20;
    }
    friend class B;
};
class B
{
public:
    void show(A obj)
    {
        std::cout << "x = " << obj.x << std::endl;
    }
};
int main()
{
    A a1;
    B b1;
    b1.show(a1);

    return 0;
}