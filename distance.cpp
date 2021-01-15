#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int x;
    float y, z;
    cout << "enter the distance in km." << endl;
    cin >> x;
    y = x / 1000;
    z = y / 100;
    cout << "distance in meter :" << y << endl;
    cout << "distance in centimeter :" << z << endl;
    return 0;
}