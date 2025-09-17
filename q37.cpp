#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[50];
    cout << "Enter a string : ";
    cin.getline(str1, 50);
    char *str2 = new char[strlen(str1) * 1];
    strcpy(str2, str1);
    cout << "string : " << str1 << endl;
    cout << "copied string : " << str2 << endl;
    return 0;
}