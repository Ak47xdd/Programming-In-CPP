#include <iostream>

int main(int argc, char *argv[])
{
    int x = 5, y = 6, z = 7, w = 8;

    std::cout << ++x << std::endl;
    std::cout << --y << std::endl;

    int a = 10, b = 3, sum, diff, mul, div, rem;

    sum = a + b;
    diff = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;

    std::cout << "Sum : " << sum << std::endl;
    std::cout << "Difference : " << diff << std::endl;
    std::cout << "Product : " << mul << std::endl;
    std::cout << "Quotient : " << div << std::endl;
    std::cout << "Remainder : " << rem << std::endl;

    return 0;
}