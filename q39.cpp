#include <iostream>
using namespace std;
struct address
{
    string city;
    int pin;
};
struct student
{
    string name;
    int roll;
    address addr;
};
int main()
{
    student s;
    cout << "enter name : ";
    cin >> s.name;
    cout << "enter rollno : ";
    cin >> s.roll;
    cout << "enter city : ";
    cin >> s.addr.city;
    cout << "enter pin code : ";
    cin >> s.addr.pin;
    cout << "\nStudent information\n";
    cout << "name : " << s.name << endl;
    cout << "roll no : " << s.roll << endl;
    cout << "city : " << s.addr.city << endl;
    cout << "pincode : " << s.addr.pin << endl;
    return 0;
}
