#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "enter number of students : ";
    cin >> n;
    string names[50];
    cout << "Enter names : ";
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    sort(names, names + n);
    cout << "\nsorted names :\n";
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}