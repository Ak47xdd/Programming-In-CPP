#include <iostream>

int main(int argc, char *argv[])
{
    bool n = false;

    if (!n)
    {
        std::cout << "Please log in" << std::endl;
    }
    else
    {
        std::cout << "Welcome to this page!" << std::endl;
    }

    return 0;
}