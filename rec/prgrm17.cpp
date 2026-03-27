#include <iostream>

int main(int argc, char *argv[])
{
    int age = 25;
    bool isStudent = true;

    if (age > 18 && isStudent)
    {
        std::cout << "Student" << std::endl;
    }
    else
    {
        std::cout << "Not Student" << std::endl;
    }

    return 0;
}
