#include <iostream>

int main(int argc, char *argv[])
{
    int a = 2, b = 3;
    std::cout << "Before a = " << a << "b = " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "After a = " << a << "b = " << b << std::endl;

    return 0;
}