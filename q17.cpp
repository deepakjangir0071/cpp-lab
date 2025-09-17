#include <iostream>
using namespace std;
float area(float r)
{
    return 3.14159 * r * r;
}
int main()
{
    float radious;
    cout << "enter radious of circle : ";
    cin >> radious;
    float x = area(radious);
    cout << "Area of circle = " << x << endl;
    return 0;
}