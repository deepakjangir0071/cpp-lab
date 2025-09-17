#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};
    int t[5];
    for (int i = 0; i < 5; i++)
    {
        t[i] = a[i] + b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << t[i] << " ";
    }
    cout << endl;
    return 0;
}