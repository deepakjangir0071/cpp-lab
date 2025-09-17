#include <iostream>
using namespace std;
int main()
{
    float r1, i1, r2, i2;
    cout << "enter real and imaginary part of 1st complex no: ";
    cin >> r1 >> i1;
    cout << "enter real and imaginary part of 2nd complex no: ";
    cin >> r2 >> i2;
    float radd = r1 + r2;
    float iadd = i1 + i2;
    float rsub = r1 - r2;
    float isub = i1 - i2;
    cout << "\nfirst complex number = " << r1 << " + " << i1 << "i";
    cout << "\nsecond complex number = " << r2 << " + " << i2 << "i";
    cout << "\n\nsum = " << radd << " + " << iadd << "i";
    cout << "\ndifference = " << rsub << " - " << isub << "i";
    cout << endl;
    return 0;
}