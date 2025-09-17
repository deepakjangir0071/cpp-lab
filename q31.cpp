#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cout << "enter first string : ";
    cin >> str1;
    cout << "enter second string : ";
    cin >> str2;
    if (str1 == str2)
    {
        cout << "both strings are equal." << endl;
    }
    else if (str1 > str2)
    {
        cout << "first string is greater than second string. " << endl;
    }
    else
    {
        cout << "second string is greater than first string." << endl;
    }
    return 0;
}