#include <iostream>

class Student
{
    std::string name;
    int age;

public:
    Student(std::string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        std::cout << "Name :" << name << std::endl;
        std::cout << "Age :" << age << std::endl;
    }
};

int main()
{
    Student s1("Arun", 20);
    s1.display();
    return 0;
}