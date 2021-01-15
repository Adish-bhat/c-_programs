// #include <iostream>
// using namespace std;

// class item
// {
//     int a, b;

// public:
//     item() //constructor
//     {
//         a=10;
//         b=20;
//     }
//     void output() // member function
//     {

//         cout << "a=" << a << endl
//              << "b=" << b;
//     }
// };
// main()
// {
//     item i1; // object declaration
//     i1.output();
// }

// //another program
// #include <iostream>
// using namespace std;

// class item
// {
//     int a, b;

// public:
//     item(int x, int y) //constructor
//     {
//         a = x;
//         b = y;
//     }
//     void output() // member function
//     {

//         cout << "a=" << a << endl
//              << "b=" << b;
//     }
// };
// main()
// {
//     item i1(10,20); // object declaration
//     i1.output();
// }

//3 program
#include <iostream>
using namespace std;
class item
{
    int a, b; //mmber data

public:
    item(int x, int y) //construcrtor
    {
        a = x;
        b = y;
    }
    void output()
    {
        cout << "a=" << a << endl
             << "b=" << b;
    }
};
main()
{
    item i2();
    item i1(20, 30);
    i1.output();
}

//Program_4
// #include <iostream>
// using namespace std;
// class item
// {
//     int a, b; //mmber data

// public:
//     item(int x, int y) // parameterised construcrtor
//     {
//         a = x;
//         b = y;
//     }
//     void output()
//     {
//         cout << "a=" << a << endl
//              << "b=" << b;
//     }
//     item() //default constructor
//     {
//     }
//     item(int j) //default constructor
//     {
//         a = j;
//     }
// };
// main()
// {

//     item i1(20, 30);
//     item i2;
//     item i3(10);
//     i1.output();
//     cout << endl;
//     i2.output();
//     cout << endl;
//     i3.output();
// }