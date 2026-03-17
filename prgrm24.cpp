#include <iostream>

class Reactangle
{
private:
    float length, breadth;
    double area;

public:
    void get(int l, int b)
    {
        length = l;
        breadth = b;
        area = length * breadth;
    }
    void display()
    {
        std::cout << "Length : " << length << std::endl;
        std::cout << "Breadth : " << breadth << std::endl;
        std::cout << "Area : " << area << std::endl;
    }
};

int main(int argc, char *argv[])
{
    Reactangle r1, r2;
    std::cout << "Rectangle 1 : " << std::endl;
    r1.get(10.5, 7.5);
    r1.display();
    std::cout << "*************************" << std::endl;
    std::cout << "Rectangle 2 : " << std::endl;
    r2.get(25.0, 12.5);
    r2.display();
    std::cout << "**************************" << std::endl;
    return 0;
}