#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
private:
    int length, breadth;

public:
    void getData()
    {
        cout << "Enter length and breadth : ";
        cin >> length >> breadth;
    }
    void area()
    {
        cout << "Area of rectangle = " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r;
    r.getData();
    r.area();

    return 0;
}