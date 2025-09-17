#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    if (n <= 1)
    {
        cout << "neither prime nor composite";
        return 0;
    }
    int x = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            x++;
            break;
        }
    }
    if (x == 0)
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "composite" << endl;
    }
    return 0;
}