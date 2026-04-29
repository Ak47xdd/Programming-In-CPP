#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor Called" << endl;
    }
    ~Test()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Test obj;

    return 0;
}