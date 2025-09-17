#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i;
    float sum = 0;
    float x = 1;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = sum + (pow(i, i) / float(x));
        x++;
    }
    cout << "sum of series = " << sum << endl;
    return 0;
}