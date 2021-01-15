// WAP in C++ to create a base class with one member private and one public and member functions to input and output the values of member data.
// Create a derived class where the member data of base class will be inherited to multiply their values and print the output.
// Implement single inheritance in private and public modes.

// #include <iostream>
// using namespace std;
// class base
// {
// private:
//     int b;

// public:
//     int a;
//     void m1()
//     {
//         cout << "enter the nunber :";
//         cin >> a >> b;
//     }
//     void m2()
//     {
//         cout << "numbers are :" << endl;
//     }
//     int show()
//     {
//         return b;
//     }
// };
// class derived : public base
// {
// public:
//     int c;
//     void product()
//     {
//         cout << "product of two numbers are :";
//         c = a * show();
//         cout << c;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     derived e;
//     e.m1();
//     e.m2();
//     e.product();
//     return 0;
// }

//Create a class account that stores customer name, account number and type of account.
//From this, derive a class check balance. Include the following member functions in order to
// achieve the following tasks:
// 1. Accept deposit from a customer and update the balance.
// 2. Display the balance
// 3. Compute Simple Interest on the amount balance.
#include <iostream>
using namespace std;
class account
{
    char name[40];
    char acc_no[15];
    char acc_type[10];

public:
    void input()
    {
        cout << "Enter Name : \t";
        cin >> name;
        cout << "Enter Account number : \t";
        cin >> acc_no;
        cout << "Enter Account type (Recurring/savings) : \t";
        cin >> acc_type;
    }
};
class check_balance : public account
{
    float deposit, time, rate, simpleInterest, finalamount;

public:
    void get_deposit()
    {
        cout << endl
             << "Enter value of deposit: \t";
        cin >> deposit;

        cout << endl
             << "Enter value of time: \t";
        cin >> time;
        cout << endl
             << "Enter value of rate: \t";
        cin >> rate;
    }
    void si()
    {
        simpleInterest = (deposit * rate * time) / 100;
        finalamount = deposit + simpleInterest;
        //cout<<c;
    }
    void display()
    {
        cout << "\n Details :\n ";

        cout << "Deposited amount= " << deposit << "\t Simple Interest " << simpleInterest << " \t Final Amount " << finalamount;
    }
};
int main()
{

    check_balance customer;
    customer.input();
    customer.get_deposit();
    customer.si();
    customer.display();
    return 0; 
}