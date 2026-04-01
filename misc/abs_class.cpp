#include <iostream>
using namespace std;

class Main
{
private:
    string name;
    string dept;

public:
    virtual void display() = 0;
    friend class Marks;
};

class Student : public Main
{
public:
    void display()
    {
        cout << "Student Details:" << endl;
    }
};

class Marks
{
private:
    int m1, m2, m3;

public:
    void get_main(Student &main)
    {
        cout << "Enter Name: ";
        cin >> main.name;
        cout << "Enter Department: ";
        cin >> main.dept;
    }

    void get_marks()
    {
        cout << "Enter Mark 1: ";
        cin >> m1;
        cout << "Enter Mark 2: ";
        cin >> m2;
        cout << "Enter Mark 3: ";
        cin >> m3;
    }

    void display(Student &main)
    {
        cout << "\n";
        cout << "--Basic Details--" << endl;
        cout << "Name: " << main.name << endl;
        cout << "Dept: " << main.dept << endl;
        cout << "--Marks Sheet--" << endl;
        cout << "Mark 1: " << m1 << endl;
        cout << "Mark 2: " << m2 << endl;
        cout << "Mark 3: " << m3 << endl;
    }

    friend class Total;
};

class Total
{
private:
    int tot;
    double avg;

public:
    void calc(Marks &mark)
    {
        tot = mark.m1 + mark.m2 + mark.m3;
        avg = tot / 3.0;
    }

    void display()
    {
        cout << "--Mark Statement--" << endl;
        cout << "Total: " << tot << endl;
        cout << "Average: " << fixed << avg << endl;
        if (avg >= 30.0)
        {
            cout << "Result: Pass" << endl;
        }
        else
        {
            cout << "Result: Fail" << endl;
        }
    }
};

int main()
{
    Student S1;
    Marks M1;
    Total T1;

    M1.get_main(S1);
    M1.get_marks();
    T1.calc(M1);

    M1.display(S1);
    T1.display();

    return 0;
}
