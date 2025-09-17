#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    int a[100];
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    cout<<endl;
    return 0;
}
