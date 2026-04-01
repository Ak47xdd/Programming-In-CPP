#include <iostream>

class Complex
{
private:
    int real, img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex()
    {
        real = 0;
        img = 0;
    }
    void display()
    {
        std::cout << real << " + i" << img;
    }
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.real;

        return temp;
    }
};
int main()
{
    Complex C1(5, 8);
    Complex C2(7, 9);
    Complex C3;

    C3 = C1 + C2;

    C3.display();

    return 0;
}