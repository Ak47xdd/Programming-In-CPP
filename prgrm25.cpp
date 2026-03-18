#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person
{
private:
    int studentID;

public:
    Student(string n, int a, int id) : Person(n, a)
    {
        studentID = id;
    }
    void display()
    {
        Person::display();
        cout << "Student ID : " << studentID << endl;
    }
};

int main(int argc, char *argv[])
{
    Student s1("Alice", 20, 101);
    s1.display();

    return 0;
}