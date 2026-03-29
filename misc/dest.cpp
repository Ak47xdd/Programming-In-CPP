#include <iostream>

class Student
{
public:
    ~Student()
    {
        std::cout << "Program exited" << std::endl;
    }
};

int main()
{
    Student s1;
    return 0;
}