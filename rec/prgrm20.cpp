#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void display()
    {
        cout << "F : " << feet << " I : " << inches << endl;
    }
    Distance operator-()
    {
        return Distance(-feet, -inches);
    }
};

int main()
{
    Distance D1(11, 10);
    D1 = -D1;
    D1.display();

    Distance D2(-23, 90);
    D2 = -D2;
    D2.display();

    return 0;
}