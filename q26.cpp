#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapp : " << endl;
    cout << "first number :" << a << "\nsecond number :" << b << endl;
    return 0;
}