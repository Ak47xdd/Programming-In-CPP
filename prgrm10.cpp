#include <iostream>

int main(int argc, char *argv[])
{
    int num_1, num_2, num_3;

    std::cout << "Enter three numbers : " << std::endl;
    ;
    std::cin >> num_1 >> num_2 >> num_3;

    if (num_1 >= num_2 && num_1 >= num_3)
    {
        std::cout << "Largest number : " << num_1 << std::endl;
    }
    else if (num_2 >= num_1 && num_2 >= num_3)
    {
        std::cout << "Largest number : " << num_2 << std::endl;
    }
    else
    {
        std::cout << "Largest number : " << num_3 << std::endl;
    }

    return 0;
}