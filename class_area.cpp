#include <iostream>
#include <stdio.h>
using namespace std;
class Area_Rectangle
{
public:
    int w, h, a;
    void input()
    {
        cout << "enter the width:" << endl;
        cin >> w;
        cout << "enter the height :" << endl;
        cin >> h;
    }
    void display()
    {
        a = w * h;
        cout << "Area of rectangle is :" << a << endl;
    }
};
int main()
{
    Area_Rectangle a;
    a.input();
    a.display();
    return 0;
}