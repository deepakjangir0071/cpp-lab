#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "enter size of array : ";
    cin >> n;
    int a[100];
    cout << "enter " << n << " numbers : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = 0, max = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i] < a[min])
            min = i;
        if (a[i] > a[max])
            max = i;
    }
    int temp;
    temp = a[min];
    a[min] = a[max];
    a[max] = temp;
    cout << "array after swap : ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}