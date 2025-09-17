#include <iostream>
using namespace std;
int main()
{
    int n, i, key;
    bool found = false;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to find : ";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }
    if (found != true)
    {
        cout << "Element not found in array " << endl;
    }

    return 0;
}