/*Create a class account that stores customer name, account number and type of account.
From this, derive a class current_account and saving_account to make them more specific.
Include the following member functions in order to achieve the following tasks:
1. Accept deposit from a customer and update the balance.
2. Display the balance
3. Compute Simple Interest on the amount balance and add it to the balance .

Type of account- savings/salary/recurring*/

// #include <iostream>
// using namespace std;
// class account
// {
// public:
//     string name, acc_type;
//     int account_number;
//     float amount, balance = 0;
//     void input()
//     {
//         cout << "enter  name :";
//         cin >> name;
//         cout << "enter account number :";
//         cin >> account_number;
//         cout << "enter  type of acccount :";
//         cin >> acc_type;
//     }
//     void Display()
//     {
//         cout << "name of the person :" << name;
//         cout << "account number of the person :" << account_number;
//         cout << "name of the person :" << balance;
//         cout << "name of the person :" << name;
//         cout << "name of the person :" << name;
//     }
// };
// class saving_account : public account
// {
//     void input_balance()
//     {
//         cout << "enter the amount which u want to add :";
//         cin >> amount;
//     }
// };
// class salary_account : public account
// {
//     void input_salery()
//     {
//         cout << "enter the amount which u want to add :";
//         cin >> amount;
//         balance = balance + amount;
//     }
// };
// class recurring_account : public account
// {
//     void input_recurring()
//     {
//         cout << "enter the amount which u want to add :";
//         cin >> amount;
//     }
//     void display_salary()
//     {
//     }
// };
// int main(int argc, char const *argv[])
// {

//     return 0;
// }

//display_salary
#include <iostream>
using namespace std;
class basic
{
public:
    char name[100];
    long account_number;
    int typeofaccount;
    void input()
    {
        cout << "\n Enter the Name of the Account Holder: ";
        gets(name);
        cout << "\n Enter the Account number: ";
        cin >> account_number;
        cout << "\n Enter the Type of Account( Current ( 1 ) /  Saving ( 2 ) ): ";
        cin >> typeofaccount;
    }
    // return_use()
    // {
    //     // int c = typeofaccount;
    //     return typeofaccount;
    // }
};
//Derived class

class current_account : public basic
{
public:
    int balance;
    int total;
    void input_Cbalance()
    {
        cout << "\n Enter the amount you want to display in Current account: ";
        cin >> balance;
        total = balance++;
        cout << "\n Total Balance in the Current account is: " << total;
    }
    void display()
    {
        cout << "\n The Name of Account Holder is: " << name;
        cout << " \n The entered Account number is: " << account_number;
        cout << "\n The Type of Account was: " << typeofaccount;
    }
    void current_simple_interest()
    {
        double rate;
        double time;
        double principal;
        cout << "\n Please enter the time period ( year) for which you are going to depoist the amount: ";
        cin >> time;
        cout << "\n Enter the Rate for the Interest Factor: ";
        cin >> rate;
        principal = (balance * rate * time) / 100;
        cout << "\n The Simple Interest on your Amount added in Current account is: " << principal;
        cout << "\n The Total balace is: " << balance << " + " << principal << " = " << (balance + principal);
    }
};

class saving_account : public current_account
{
public:
    int balance;
    int total;
    void input_Sbalance()
    {
        cout << "\n Enter the amount you want to display in Saving account: ";
        cin >> balance;
        total = balance++;
        cout << "\n Total Balance in the Saving account is: " << total;
    }
    void saving_simple_interest()
    {
        double rate;
        double time;
        double principal;
        cout << "\n Please enter the time period (year)for which you are going to depoist the amount: ";
        cin >> time;
        cout << "\n Enter the Rate for the Interest Factor: ";
        cin >> rate;
        principal = (balance * rate * time) / 100;
        cout << "\n The Simple Interest on your Amount added in Saving account is: " << principal;
        cout << "\n The Total balace is: " << balance << " + " << principal << " = " << (balance + principal);
    }
};

//main

int main()
{
    saving_account person;
    person.input();
    switch (person.typeofaccount)
    {
    case 1:
        person.input_Cbalance();
        person.display();
        cout << endl;
        person.current_simple_interest();
        break;
    case 2:
        person.input_Sbalance();
        person.display();
        cout << endl;
        person.saving_simple_interest();

    default:
        cout << "\n Invalid Choice\n";
        break;
    }
    return 0;
}   