
// Q2 Create a class Time which contains:
//         - Hours 
//         - Minutes 
//         - Seconds 
//     Write a C++ program using operator overloading for the following: 
//                
//         1.  = = : To check whether two Time are same or not. 
//         2.  &amp;gt;&amp;gt;  : To accept the time. 
//         3.  &amp;lt;&amp;lt;  : To display the time.

#include <iostream>
using namespace std;
class time
{
    int hours, minutes, seconds;

public:
    void input()
    {
        cout << "enter how many hours :";
        cin >> hours;
        cout << "enter how many minutes :";
        cin >> minutes;
        cout << "enter how many seconds :";
        cin >> seconds;
    }
    void output()
    {
        cout << "Your Time = " << hours << ":" << minutes << ":" << seconds << endl;
    }
    time operator==(time a)
    {
        if (hours == a.hours)
        {
            cout << "Both time are same" << endl;
        }
    }
    time operator<(time b)
    {
        if (hours < b.hours)
        {
            cout << "Time1"
                 << "is lesser than"
                 << "Time2" << endl;
        }
    }
    time operator>(time c)
    {
        if (hours > c.hours)
        {
            cout << "Time1"
                 << "is greater than "
                 << "Time2" << endl;
        }
    };
    int main()
    {
        time t1, t2;
        t1.input();
        t2.input();
        t1.output();
        t2.output();
        t1 == t2;
        t1 < t2;
        t1 > t2;
        return 0;
    }