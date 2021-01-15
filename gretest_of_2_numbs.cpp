// #include <iostream>
// #include<stdio.h>
// using namespace std;
// class great
// {
//     int a, b, greater;

// public:
//     void input()
//     {
//         cout << "enter the first number :";
//         cin >> a;
//         cout << "enter the second number : ";
//         cin >> b;
//     }
//     friend great big(great x, great y);
//     {
//         x = a;
//         y = b;
//     }
//     void display()
//     {
//         cout << "Greater number is" << greater;
//     }
// };
// great big(great x, great y)
// {
//     if (x > y)
//     {
//         cout << "greater number is :" << x;
//     }
//     else
//     {
//         cout << "greater number is :" << y;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     great n;
//     n.input();
//     n.display();
//     return 0;
// }

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int x, y;
    cout << "enter value of first no. " << endl;
    cin >> x;
    cout << "enter value of second no. " << endl;
    cin >> y;
    if (x > y)
    {
        cout << "gretest is :" << x << endl;
    }
    else
    {
        cout << "greatest is :" << y << endl;
    }

    return 0;
}