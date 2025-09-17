#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    char course[20];

public:
    void getdata();
    void dispaly();
};

void student ::getdata()
{
    cout << "enter name : ";
    cin >> name;
    cout << "enter roll no : ";
    cin >> roll;
    cout << "enter course : ";
    cin >> course;
}

void student ::dispaly()
{
    cout << "\nstudrnt details\n";
    cout << "name : " << name << endl;
    cout << "roll no : " << roll << endl;
    cout << "course : " << course << endl;
}
int main()
{
    student s[3];
    for (int i = 0; i < 3; i++)
    {
        s[i].getdata();
    }
    for (int i = 0; i < 3; i++)
    {
        s[i].dispaly();
    }

    return 0;
}
