// Q1 Write a program in C++ demonstrating operator overloading by using friend function.

// C++ program to show binary operator overloading
// #include <iostream>
// using namespace std;
// class Distance
// {
// public:
//     int kilometre, metre;
//     Distance()
//     {
//         this->kilometre = 0;
//         this->metre = 0;
//     }
//     Distance(int f, int i)
//     {
//         this->kilometre = f;
//         this->metre = i;
//     }
//     friend Distance operator+(Distance &, Distance &);
// };
// Distance operator+(Distance &d1, Distance &d2) // Call by reference
// {
//     Distance d3;
//     d3.kilometre = d1.kilometre + d2.kilometre;
//     d3.metre = d1.metre + d2.metre;
//     return d3;
// }
// int main()
// {
//     Distance d1(8, 9);
//     Distance d2(10, 2);
//     Distance d3;
//     d3 = d1 + d2;
//     cout << "\nTotal kilometre& metrees: " << d3.kilometre << "'" << d3.metre;
//     return 0;
// }

// Q2 Create a class Time which contains:
//         - Hours 
//         - Minutes 
//         - Seconds 
//     Write a C++ program using operator overloading for the following: 
//                
//         1.  = = : To check whether two Time are same or not. 
//         2.  &amp;gt;&amp;gt;  : To accept the time. 
//         3.  &amp;lt;&amp;lt;  : To display the time.

// #include <iostream>
// using namespace std;
// class time
// {
//     int hours, minutes, seconds;
// public:
//     void input()
//     {
//         cout << "enter how many hours :";
//         cin >> hours;
//         cout << "enter how many minutes :";
//         cin >> minutes;
//         cout << "enter how many seconds :";
//         cin >> seconds;
//     }
//     void output()
//     {
//         cout << "Your Time1 = " << hours << ":" << minutes << ":" << seconds << endl;
//     }
//     time operator == (time a)
//     {
//         if (hours == a.hours)
//         {
//             cout<<"Both time are same"<<endl;
//         }
//         return a;
//     }
//     time operator < (time b)
//     {
//         if (hours < b.hours)
//         {
//             cout<<hours<<"is lesser than"<<b.hours<<endl;
//         }
//         return b;
//     }
//     time operator > (time c)
//     {
//         if (hours > c.hours)
//         {
//             cout<<hours<<"is greater than "<<c.hours<<endl;
//         }
//         return c;
//     }
// };
// int main()
// {
//     time t1,t2;
//     t1.input();
//     t2.input();
//     t1.output();
//     t2.output();
//     t1 == t2;
//     t1 < t2;
//     t1 > t2;
//     return 0;
// }

// Q3 Write a C++ program to create a class FD a/c which contains member (fdno, name, amt,
// interest rate, maturity amt &amp;amp; No. of months). Write parameterized constructor where interest rate
// should be default argument. Calculate maturity amt using interest rate &amp;amp; display all the details.

#include <iostream>
#include <math.h>
using namespace std;
class FD_account
{
    char name[100];
    float CI, interest_rate, m_amt, amt;
    int no_of_months;
    long int fdno;

public:
    void input()
    {
        cout << "enter FD number :";
        cin >> fdno;
        cout << "enter the name of the person:";
        cin >> name;
        cout << "enter the amount :";
        cin >> amt;
        cout << "enter the number of months:";
        cin >> no_of_months;
    }

    FD_account(void);
    void output()
    {
        cout << "\n\n";
        CI = amt * (pow((1 + interest_rate / 100), no_of_months));
        m_amt = amt + CI;
        cout << "FD number :" << fdno << endl;
        cout << "Name :" << name << endl;
        cout << "Amount :" << amt << endl;
        cout << "interest_rate :" << interest_rate << endl;
        cout << "maturity amount you get is :" << m_amt;
    }
};
FD_account ::FD_account(void)
{
    interest_rate = 5;
};
int main()
{
    FD_account n;
    n.input();
    n.output();
    return 0;
}

// Q 4) Write a C++ program to define a class employee having members Emp-id, Emp-name, basic salary
// and functions accept() and display(). Calculate DA = 25% of basic salary,
// HRA=800, I-tax = 15% of basic salary. Display the payslip using appropriate output format.

// #include <iostream>
// using namespace std;
// class employee
// {
// 	int emp_id;
// 	float salary;
// 	char name[100];
// 	float HRA,Tax,DA,money;

// public:
// 	void accept()
// 	{
// 		cout << "enter the employee id :";
// 		cin >> emp_id;
// 		cout << "enter employee name :";
// 		cin >> name;
// 		cout << "enter the employee salary :";
// 		cin >> salary;
// 	}
// 	void display()
// 	{
// 		HRA = 800;
// 		DA = 0.25 * salary;
// 		Tax = 0.15 * salary;
// 		money = salary + HRA + DA - Tax;
// 		cout << "employee details are :";
// 		cout << "\n \n";
// 		cout << "Id of the employee :" << emp_id << endl;
// 		cout << "name of the employee :" << name << endl;
// 		cout << "salary of the employee :" << money << endl;
// 	}
// };
// int main()
// {
// 	employee e1;
// 	e1.accept();
// 	e1.display();
// 	getchar;
// 	return 0;
// } 