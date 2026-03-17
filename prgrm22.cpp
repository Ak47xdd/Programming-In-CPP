#include <iostream>

class Person
{
public:
    std::string name;
    int number;
};

int main()
{
    Person p1;

    std::cout << "Enter the name : ";
    std::cin >> p1.name;
    std::cout << "Enter the number : ";
    std::cin >> p1.number;

    std::cout << "Values : " << p1.name << " : " << p1.number << std::endl;
    return 0;
}