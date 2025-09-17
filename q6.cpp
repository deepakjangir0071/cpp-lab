#include <iostream>
using namespace std;
int main()
{
    char chlower, chupper;
    int ascii;
    cout << "enter lower case character : ";
    cin >> chlower;
    if (chlower >= 'a' && chlower <= 'z')
    {
        ascii = chlower;
        ascii = ascii - 32;
        chupper = ascii;
        cout << endl
             << chlower << " in uppercase: " << chupper << endl;
    }
    else if (chlower >= 'A' && chlower <= 'Z')
    {
        cout << "\nAlready in upper case.";
    }
    else
    {
        cout << "\n invalid input!";
    }
    return 0;
}