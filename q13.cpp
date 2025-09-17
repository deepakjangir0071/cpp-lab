#include <iostream>
using namespace std;
int main()
{
    int n;
    double sum;
    cout << "enter the number you want to sum : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    float avg = sum / n;
    cout << "avg of sum of " << n << "natural number is : " << avg << endl;
    return 0;
}