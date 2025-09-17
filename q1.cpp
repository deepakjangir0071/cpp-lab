#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1, x2, y1, y2, dist;
    cout << "Enter first point :  " << endl;
    cin >> x1 >> y1;
    cout << "Enter second point :  ";
    cin >> x2 >> y2;
    dist = sqrt(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    cout << "distance = " << dist;
    return 0;
}