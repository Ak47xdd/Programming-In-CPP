#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    Student(int r, string n)
    {
        roll_no = r;
        name = n;
    }
};
class Test : public Student
{
protected:
    int mark1, mark2;

public:
    Test(int r, string n, int m1, int m2) : Student(r, n)
    {
        mark1 = m1;
        mark2 = m2;
    }
};
class Result : public Test
{
private:
    int total;
    float average;

public:
    Result(int r, string n, int m1, int m2) : Test(r, n, m1, m2)
    {
        total = mark1 + mark2;
        average = total / 2.0;
    }
    void display()
    {
        cout << "Roll No : " << roll_no << endl;
        cout << "Name : " << name << endl;
        cout << "Mark 1 : " << mark1 << endl;
        cout << "Mark 2 : " << mark2 << endl;
        cout << "Total : " << total << endl;
        cout << "Average : " << average << endl;
    }
};
int main(int argc, char *argv[])
{
    Result r1(101, "Anu", 85, 90);
    r1.display();

    return 0;
}