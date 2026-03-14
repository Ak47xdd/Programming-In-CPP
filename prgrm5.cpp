#include <iostream>

int main(int argc, char *argv[])
{
    int a, b, sum;

    std::cout << "Enter the first number : " << std::endl;
    std::cin >> a;

    std::cout << "Enter the second number : " << std::endl;
    std::cin >> b;

    sum = a + b;

    std::cout << "Sum of two numbers " << a << " and " << b << " is : " << sum << std::endl;

    return 0;
}