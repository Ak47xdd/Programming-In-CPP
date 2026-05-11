#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag - 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        // 3 + 4i
        cout << real << " + " << imag << "i" << endl;
    }
    Complex operator+(Complex obj)
    {
        // 2 + 3i -> C1
        // 5 + 6i -> C2
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};

int main()
{
    Complex C1(2, 3), C2(5, 6);
    Complex C3;

    C3 = C1 + C2; // C3 = C1.operator+(C2);

    C3.display();

    return 0;
}
