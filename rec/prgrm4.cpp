#include <iostream>

int main(int argc, char *argv[])
{
    std::string name;
    int age;

    std::cout << "Enter name and age : " << std::endl;
    std::cin >> name >> age;

    std::cout << "Name : " << name << std::endl;
    std::cout << "Age : " << age << std::endl;

    return 0;
}