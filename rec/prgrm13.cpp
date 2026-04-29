#include <iostream>
using namespace std;

class Student
{
public:
    int roll_no;
    string name;

    void get()
    {
        cout << "Enter roll and name : ";
        cin >> roll_no >> name;
    }
    void display()
    {
        cout << "Roll : " << roll_no << "\nName : " << name;
    }
};

int main()
{
    Student s[3];

    for (int i = 0; i < 3; i++)
    {
        s[i].get();
    }

    cout << "\nStudent Details : \n";

    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }

    return 0;
}