#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number :" << endl;
    cin >> n;
    cout<<"even numbers are:\n";
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0 || i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

