#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";
    string result = str1 + " " + str2;

    cout << "Concatenation : " << result << endl;
    cout << "Length : " << result.length() << endl;

    if (result.find("World") != std::string::npos)
        cout << "Substring found" << endl;

    result.replace(6, 5, "C++");
    cout << "After result : " << result << endl;
    cout << "Charaters in given string : ";

    for (int i = 0; i < result.length(); i++)
    {
        cout << result[i] << "";
    }

    return 0;
}