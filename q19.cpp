#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
float add(float a, int b)
{
    return a + b;
}
float add(int a, float b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}
int main()
{
    int x = 10;
    float y = 56.7;
    cout << "int+int= " << add(3, 4) << endl;
    cout << "float+float= " << add(2.5f, 3.5f) << endl;
    cout << "int+float= " << add(x, y) << endl;
    cout << "float+int= " << add(y, x) << endl;
    return 0;
}