#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex C1(2, 3), C2(4, 5);
    Complex C3 = C1 + C2;

    cout << "Result : " << endl;

    C3.display();

    return 0;
}