#include <iostream>

class Base
{
public:
    int x = 10;

protected:
    int y = 20;

private:
    int z = 30;
};
class Derived : private Base
{
public:
    void show()
    {
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
        // std::cout << "z = " << z << std::endl; // error : 'z' is a private member of 'Base'
    }
};
int main()
{
    Derived d1;
    // std::cout << "x = " << d1.x << std::endl; // error : 'x' is a private member of 'Base'
    // std::cout << "y = " << d1.y << std::endl; // error : 'y' is a private member of 'Base'
    d1.show();

    return 0;
}