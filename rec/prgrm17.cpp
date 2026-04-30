#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "This is base class function" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "This is Derived class function" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->show();

    return 0;
}