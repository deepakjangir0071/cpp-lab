#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int total, m, n;
    cout << "enter total :";
    cin >> total;
    cin.ignore();
    vector<string> lines(total);
    for (int i = 0; i < total; i++)
    {
        getline(cin, lines[i]);
    }
    cout << "enter m and n : " << endl;
    cin >> m >> n;
    for (int i = m - 1; i < m - 1 + n && i < total; i++)
    {
        cout << lines[i] << endl;
    }
    return 0;
}