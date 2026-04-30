#include <iostream>
using namespace std;

class A
{
private:
    string name;
    long long num;

public:
    A()
    {
        num = 9867452488;
        name = "AKHIL";
    }
    friend class B;
};

class B
{
public:
    void display(A obj)
    {
        cout << "Name :" << obj.name << endl;
        cout << "Mobile : " << obj.num << endl;
    }
};

int main()
{
    A objA;
    B objB;

    objB.display(objA);

    return 0;
}