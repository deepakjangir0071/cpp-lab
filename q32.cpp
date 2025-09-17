#include <iostream>
#include <string>
using namespace std;
int main()
{
    string main_text, sub_text;
    int position;
    cout << "Enter the main text : ";
    getline(cin, main_text);
    cout << "Enter the string to insert : ";
    getline(cin, sub_text);
    cout << "emter the position where you want to insert : ";
    cin >> position;
    if (position < 0 || position > main_text.length())
    {
        cout << "Invalid code! ";
    }
    else
    {
        main_text.insert(position, sub_text);
        cout << "text after insertion : " << main_text << endl;
    }
    return 0;
}