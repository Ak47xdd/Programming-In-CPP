#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class function" << endl;
    }
    void display()
    {
        show();

        Base::show();
    }
};

int main()
{
    Derived obj;

    obj.display();

    return 0;
}