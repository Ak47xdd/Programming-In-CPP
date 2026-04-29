#include <iostream>

class Student
{
private:
    std::string name, regno, branch;
    int sem;

public:
    void input();
    void display();
};

void Student::input()
{
    std::cout << "Enter name : ";
    std::cin >> name;
    std::cout << "Enter regno : ";
    std::cin >> regno;
    std::cout << "Enter branch : ";
    std::cin >> branch;
    std::cout << "Enter sem : ";
    std::cin >> sem;
}

void Student::display()
{
    std::cout << "Name : " << name << std::endl;
    std::cout << "Regno : " << regno << std::endl;
    std::cout << "Branch : " << branch << std::endl;
    std::cout << "Sem : " << sem << std::endl;
}

int main(int argc, char *argv[])
{
    Student s1;

    s1.input();
    s1.display();

    return 0;
}