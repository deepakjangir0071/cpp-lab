#include <iostream>
using namespace std;
float volume(float l = 1, float w = 1, float h = 1)
{
    return l * w * h;
}
int main()
{
    float l, w, h;
    cout << "enter length,width,height(enter 0 if not given) : ";
    cin >> l >> w >> h;
    if (l == 0)
        l = 1;
    if (w == 0)
        w = 1;
    if (h == 0)
        h = 1;
    cout << "volume of cuboid : " << volume(l, w, h) << endl;
    return 0;
}