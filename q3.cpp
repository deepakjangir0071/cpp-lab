#include <iostream>
using namespace std;
int main()
{
    int a, b, s;
    cout << "enter a and b : " << endl;
    cin >> a >> b;
    s = a;
    a = b;
    b = s;
    cout << "after swap: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    return 0;
}