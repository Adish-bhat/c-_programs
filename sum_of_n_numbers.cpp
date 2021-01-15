#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int num, i, sum = 0;
    cout << "enter the number :" << endl;
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "sum upto given number is :" << sum;
    return 0;
}