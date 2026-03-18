#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int empID;

public:
    void getEmployee()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter employee ID : ";
        cin >> empID;
    }
    void displayEmployee()
    {
        cout << "Name : " << name << endl;
        cout << "Employee ID : " << empID << endl;
    }
};
class Salary
{
protected:
    float basic, hra, da;
    int totalSalary;

public:
    void getSalary()
    {
        cout << "Enter basic salary : ";
        cin >> basic;
        cout << "Enter HRA : ";
        cin >> hra;
        cout << "Enter DA : ";
        cin >> da;
    }
    float calculateSalary()
    {
        return basic + hra + da;
    }
};
class Payroll : public Employee, public Salary
{
public:
    void processPayroll()
    {
        totalSalary = calculateSalary();
    }
    void displayPayroll()
    {
        displayEmployee();
        cout << "Basic Salary : " << basic << endl;
        cout << "HRA : " << hra << endl;
        cout << "DA : " << da << endl;
        cout << "Total Salary : " << totalSalary << endl;
    }
};

int main(int argc, char *argv[])
{
    Payroll p1;
    cout << "Enter employee details : " << endl;
    p1.getEmployee();
    cout << "Enter salary details : " << endl;
    p1.getSalary();
    p1.processPayroll();
    p1.displayPayroll();

    return 0;
}