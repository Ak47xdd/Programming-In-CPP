#include <iostream>

class Student
{
    std::string name;
    int age;

public:
    Student()
    {
        name = "Arun";
        age = 20;
    }
    void display()
    {
        std::cout << "Name :" << name << std::endl;
        std::cout << "Age :" << age << std::endl;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}