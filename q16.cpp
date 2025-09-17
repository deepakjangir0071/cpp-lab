#include <iostream>
using namespace std;
int main()
{
    int startday, days;
    cout << "Enter startday(0=sun,1=mon,2=tue,_______,6=sat) : ";
    cin >> startday;
    cout << "Enter number of days in months : ";
    cin >> days;
    cout << "\nSUN MON TUE WED THR FRI SAT\n";
    for (int i = 0; i < startday; i++)
    {
        cout << "    ";
    }
    for (int d = 1; d <= days; d++)
    {
        cout.width(3);
        cout << d << " ";
        if ((startday + d) % 7 == 0)
        {
            cout << "\n";
        }
    }
    cout << endl;
    return 0;
}