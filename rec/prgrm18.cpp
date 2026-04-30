#include <iostream>
using namespace std;

class Test
{
private:
    int num1, num2;

public:
    Test()
    {
        num1 = 10;
        num2 = 120;
    }
    friend void display(Test t);
};

void display(Test t)
{
    cout << "Value of num : " << t.num1 << " " << t.num2;
}

int main()
{
    Test obj;

    display(obj);

    return 0;
}