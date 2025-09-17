#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter the number of elements in first array :";
    cin >> n1;
    int arr[100];
    cout << "enter " << n1 << " elements :\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }
    cout << "\nenter the number of elements in second array :";
    cin >> n2;
    int arr2[100];
    cout << "\nenter " << n2 << " elements :\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    int merged[200];
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr[i];
    }
    for (int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }
    cout << "Merged array = \n";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;
    return 0;
}