#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a and b : ";
    cin >> a >> b;
    cout << "a+b= " << a + b << endl;
    cout << "a-b= " << a - b << endl;
    cout << "a*b= " << a * b << endl;
    if (b == 0)
    {
        cout << "invalid" << endl;
    }
    else
    {
        cout << "a/b= " << a / b << endl;
    }
    return 0;
}