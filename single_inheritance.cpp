// #include <iostream>
// using namespace std;
// class Parent
// {
//     int a;

// public:
//     void input()
//     {
//         cout << "enter value";
//         cin >> a;
//     }

//     int show_a()
//     {
//         return a;
//     }
//     void output_a()
//     {
//         cout << endl
//              << "value of a=" << a;
//     }
// };
// class Derive : public Parent
// {

//     int b, c;

// public:
//     void get_b()
//     {

//         cout << "enter value of b";
//         cin >> b;
//     }
//     void add_a_b()
//     {
//         c = show_a() + b;
//         cout << c;
//     }
//     void display()
//     {
//         cout << "value are=";

//         cout << "A=" << show_a() << endl
//              << "B=" << b << endl
//              << "c=" << c;
//         ;
//     }
// };
// main()
// {

//     Derive obj;
//     obj.input();
//     obj.output_a();
//     obj.get_b();
//     obj.add_a_b();
//     obj.display();
// }

// lab
#include<iostream>
using namespace std;
class Base
{
    int a;

public:
    void input()
    {
        cout << "enter a";
        cin >> a;
    }
    int show_a()
    {
        return a;
    }
};
class Derive : private Base
{
public:
    int b, c;
public:
    void multiply()
    {
        void input();
        cout << "value of a *b in derive=";
        //cout<<a;
        //show_a();
        c = b * show_a();
        cout << c;
    }
};
main()
{
    Derive d;
    d.b = 5;
    //d.input();
    d.multiply();
    //d.show_a();
}