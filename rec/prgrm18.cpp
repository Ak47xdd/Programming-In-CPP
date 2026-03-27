#include <iostream>

int main(int argc, char *argv[])
{
    int n = 7;

    if (n <= 0 || n >= 10)
    {
        std::cout << "n is not in range [0, 10]" << std::endl;
    }
    else
    {
        std::cout << "n is in range [0, 10]" << std::endl;
    }

    return 0;
}