#include <iostream>

// 10 -> -10, -9 -> 9

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
    std::cout << "Feet : " << feet << "\n"
              << "Inches : " << inches << std::endl;
  }
  Distance operator-() // data_type operator symbol()
  {
    return Distance(-feet, -inches);
  }
};

int main()
{
  Distance D1(10, -11);
  D1 = -D1;
  D1.display();

  return 0;
}