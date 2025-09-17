#include <iostream>
using namespace std;
int main()
{
    int a, b, sum;
    int *p1, *p2;
    cout << "Enter two integers: ";
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    cout << "sum = " << sum << endl;
    return 0;
}