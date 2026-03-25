#include <iostream>

int main(int argc, char *argv[])
{
    float P, R, T, SI;

    std::cout << "Enter the Principle Amount : " << std::endl;
    std::cin >> P;

    std::cout << "Enter the rate of interest : " << std::endl;
    std::cin >> R;

    std::cout << "Enter the Time duration : " << std::endl;
    std::cin >> T;

    SI = (P * R * T) / 100;

    std::cout << "Simple Interest : " << SI << std::endl;

    return 0;
}