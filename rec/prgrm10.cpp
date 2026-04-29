#include <iostream>

int fact(int n)
{
    if (n < 0)
    {
        std::cout << "Error: Factorial is not defined for negative numbers." << std::endl;
        return -1; // Return -1 to indicate an error
    }
    else if (n == 0 || n == 1)
    {
        return 1; // Factorial of 0 and 1 is 1
    }
    else
    {
        return n * fact(n - 1); // Recursive call
    }
}

int main(int argc, char *argv[])
{
    int number;

    std::cout << "Enter a positive integer : ";
    std::cin >> number;

    int result = fact(number);
    if (result != -1)
    {
        std::cout << "Factorial of " << number << " = " << result << std::endl;
    }

    return 0;
}