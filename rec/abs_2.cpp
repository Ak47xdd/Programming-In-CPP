#include <iostream>
#include "Abstract.cpp"
using namespace std;

class A : public Test
{
    public:
        void display()
        {
            cout << "Value of x : "<< x<<endl;
        }
};

int main()
{
    A a;
    a.x = 11;
    a.display();

    return 0;
}