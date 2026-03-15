#include <iostream>

int main(int argc, char *argv[])
{
    char oprt;
    float num_1, num_2;

    std::cout << "Enter an operator(+.-.*, /) : " << std::endl;
    std::cin >> oprt;

    std::cout << "Enter two numbers : " << std::endl;
    std::cin >> num_1 >> num_2;

    switch (oprt)
    {
    case '+':
        std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
        break;

    case '-':
        std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
        break;

    case '*':
        std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
        break;

    case '/':
        std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
        break;

    default:
        std::cout << "Error! The operator is not correct" << std::endl;
    }
    return 0;
}