#include <iostream>

void sq_root()
{
    double x;

    std::cout << "Enter the number : ";
    std::cin >> x;
    if (x < 0)
    {
        std::cout << "Error: Cannot compute square root of a negative number." << std::endl;
        return;
    }
    else
    {
        std::cout << "Square : " << x * x << std::endl;
    }
}

int main(int argc, char *argv[])
{
    sq_root();
    return 0;
}