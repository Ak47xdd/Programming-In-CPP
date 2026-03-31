#include <iostream>

class Base
{
public:
    int x;

protected:
    int y = 20;
};
class Derived : public Base
{
public:
    void show()
    {
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }
};
int main()
{
    Derived d1;
    d1.x = 10;
    d1.show();

    return 0;
}