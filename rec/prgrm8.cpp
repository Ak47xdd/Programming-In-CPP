#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter a postive integer : ";
    cin >> n1;

    cout << "Enter a postive integer : ";
    cin >> n2;

    if (n1 > n2)
        cout << n1 << " is greater than " << n2;
    else if (n1 < n2)
        cout << n2 << " is greater than " << n1;
    else if (n1 >= n2)
        cout << n1 << " is greater than or equal to " << n2;
    else if (n1 <= n2)
        cout << n2 << " is greater than or equal to " << n1;
    else if (n1 == n2)
        cout << n1 << " is equal to " << n2;
    else
        cout << n1 << " is not equal to " << n2;

    return 0;
}