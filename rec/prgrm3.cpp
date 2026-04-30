#include <iostream>

int main(int argc, char *argv[])
{
    int n;

    std::cout << "Enter an integer : " << std::endl;
    std::cin >> n;

    (n % 2 == 0) ? std::cout << n << " is even " : std::cout << n << " is odd " << std::endl;

    return 0;
}