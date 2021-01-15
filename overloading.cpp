#include <iostream>
using namespace std;
class Circle
{
    float radius;

public:
    void input()
    {
        cout << endl
             << "enter radius";
        cin >> radius;
    }
    void output()
    {
        cout << endl
             << "radius=" << radius;
    }
    Circle operator == (Circle c)
    {
        //Circle temp;
        if (radius == c.radius)
        {
            cout << endl
                 << "circles are equal";
        }
        else
            cout << endl
                 << "circles are unequal";
    }
};
main()
{
    Circle r1, r2;
    r1.input();
    r2.input();
    r1.output();
    r2.output();
    r1 == r2; //r1.operator==(r2);
}

// //another
// #include <iostream>
// using namespace std;
// class Circle
// {
//     float radius;

// public:
//     void input()
//     {
//         cout << endl
//              << "enter radius";
//         cin >> radius;
//     }
//     void output()
//     {
//         cout << endl
//              << "radius=" << radius;
//     }
//     Circle operator==(Circle c)
//     {
//         //Circle temp;
//         if (radius == c.radius)
//         {
//             cout << endl
//                  << "circles are equal";
//         }
//         else
//             cout << endl
//                  << "circles are unequal";
//     }
// };
// main()
// {
//     Circle r1, r2;
//     r1.input();
//     r2.input();
//     r1.output();
//     r2.output();
//     r1 == r2; //r1.operator==(r2);
// }
// // another one

// #include <iostream>
// #include <string.h>
// using namespace std;
// class String
// {
// public:
//     char str[20];

// public:
//     void accept_string()
//     {
//         cout << "\n Enter String:   ";
//         cin >> str;
//     }
//     void display_string()
//     {
//         cout << str;
//     }
//     String operator+(String x) //Concatenating String
//     {
//         String s;
//         strcat(str, x.str);
//         strcpy(s.str, str);
//         return s;
//     }
// };
// int main()
// {
//     String str1, str2, str3;
//     str1.accept_string();
//     str2.accept_string();
//     cout << "\n\n First String is     :  ";
//     str1.display_string(); //Displaying First String
//     cout << "\n\n Second String is     :  ";
//     str2.display_string();
//     str3 = str1 + str2;
//     cout << "\n\n Concatenated String is    :  ";
//     str3.display_string();
//     return 0;
// }

// //other
// #include <iostream>
// using namespace std;

// class company
// {
//     int sal;
//     int nop;

// public:
//     friend void print(company &);
//     company()
//     {
//         sal = 0;
//         nop = 0;
//     }
//     company operator+(company);
//     company operator-(company c)
//     {
//         company temp;
//         temp.sal = sal - c.sal;
//         temp.nop = nop - c.nop;
//         return temp;
//     }
//     void set_data(int s, int n)
//     {
//         sal = s;
//         nop = n;
//     }
// };
// void print(company &sum)
// {
//     cout << "Total Salary is :" << sum.sal << endl;
//     cout << "Total No: of Parts is:" << sum.nop << endl;
// }
// company company::operator+(company c)
// {
//     company temp;
//     temp.sal = sal + c.sal;
//     temp.nop = nop + c.nop;
//     return temp;
// }
// main()
// {
//     int s, n;
//     company sum, ram, Sham, sub;
//     cout << "Enter the salary for Ram";
//     cin >> s;
//     cout << "Enter No:Of Parts for Ram:";
//     cin >> n;
//     ram.set_data(s, n);
//     cout << "Enter the salary for Sham";
//     cin >> s;
//     cout << "Enter No:Of Parts for Sham:";
//     cin >> n;
//     Sham.set_data(s, n);
//     sum = ram + Sham;
//     print(sub);
// }

// //another one
// #include <iostream>
// using namespace std;
// class counter
// {
//     int count;

// public:
//     counter()
//     {
//         count = 0;
//     }
//     counter operator++(int)
//     {
//         count++;
//     }
//     int get_count()
//     {
//         return count;
//     }
//     counter operator--(int)
//     {
//         count--;
//     }
// };
// main()
// {
//     counter c1;
//     cout << "Initial No Of People " << c1.get_count() << endl;
//     c1++;
//     c1++;
//     c1++;
//     cout << "Present No Of People " << c1.get_count() << endl;
//     c1--;
//     c1--;
//     cout << "Present No Of People " << c1.get_count() << endl;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class String
// {
// public:
//     char str[20];

// public:
//     void accept_string()
//     {
//         cout << "\n Enter String:   ";
//         cin >> str;
//     }
//     void display_string()
//     {
//         cout << str;
//     }
//     String operator+(String x) //Concatenating String
//     {
//         String s;
//         strcat(str, x.str);
//         strcpy(s.str, str);
//         return s;
//     }
// };
// int main()
// {
//     String str1, str2, str3;
//     str1.accept_string();
//     str2.accept_string();
//     cout << "\n\n First String is     :  ";
//     str1.display_string(); //Displaying First String
//     cout << "\n\n Second String is     :  ";
//     str2.display_string();
//     str3 = str1 + str2;
//     cout << "\n\n Concatenated String is    :  ";
//     str3.display_string();
//     return 0;
// }