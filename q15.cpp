#include <iostream>
using namespace std;
int main()
{
    int largest;
    int n;
    int num[10];
    cout << "Enter 10 numbers : ";
    cin >> largest;
    for (int i = 1; i < 10; i++)
    {
        cin >> num[i];
        largest = (num[i] > largest) ? num[i] : largest;
    }
    cout << "the largest number among these 10 numbers is : " << largest << endl;
    return 0;
}