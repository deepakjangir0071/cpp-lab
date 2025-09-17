#include <iostream>
using namespace std;
int power(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}
int main()
{
    int base, exp;
    cout << "enter base : ";
    cin >> base;
    cout << "\nenter exponent : ";
    cin >> exp;
    cout << base << "^" << exp << "=" << power(base, exp) << endl;
    return 0;
}