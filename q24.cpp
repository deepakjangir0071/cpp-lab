#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int a[100];
    cout << "enter " << n << " numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int largest = a[0];
    int second = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > second && a[i] < largest)
        {
            second = a[i];
        }
    }
    cout << "second greatest num is : " << second << endl;
    return 0;
}