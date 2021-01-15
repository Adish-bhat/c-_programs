// SET 2( ODD ROLL NO.’S)
// Q 1. Write a C++ program to design a base class Person (name, address, phone_no).
//  Derive a class Employee (eno, ename) from Person.
//  Derive a class Manager (designation, department name, basic-salary) from Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary

#include <iostream>
#include <stdio.h>
using namespace std;
class person //base class
{
public:
    char name[100];
    string address;
    long int phn_no;
    void input()
    {
        cout << "enter name" << endl;
        cin >> name;
        cout << "enter address:" << endl;
        cin >> address;
        cout << "enter phone number :" << endl;
        cin >> phn_no;
    }
};
class employee : public person //derived class of base class
{
    // long int e_no;
    // char e_name[100];
public:
    void employee_output()
    {
        cout << "employee number is :" << phn_no << endl;
        cout << "enter employee name :" << name << endl;
    }
};
class manager : public employee // derived class of derived class
{
public:
    int n;
    void manage()
    {
        char dept_name[100], designation[100];
        int salery[n];
        cout << "enter the number of managers :" << endl;
        cin >> n;
        input();
        employee();
        for (int i = 0; i < n; i++)
        {
            cout << "enter department name :" << endl;
            cin >> dept_name;
            cout << "enter designation :" << endl;
            cin >> designation;
            cout << "enter salery :" << endl;
            cin >> salery[n];
            int temp = 0;
            for (int i = 0; i < n; i++)
            {
                if (temp < salery[i])
                {
                    temp = salery[i];
                }
            }
            cout << "highest salery of the manager is :" << temp;  
        }
    }
    void display()
    {
        float t = 0.0;
    }
};
int main()
{
    person p;
    employee e;
    manager m;
    p.input();
    m.manage();
    e.employee_output();
    return 0;
}

// Q 2. A file contains a list of phone numbers in the following form:-
// John            23456
// Ahmed        45678
// The names contain only one word and the names and telephone numbers are separated by white spaces.
//Write a program to read a file and output the list in two columns. The names should be left- justified and the numbers
//right – justified.

// Q 3. Write a C++ program to demonstrate how a common friend function can be used to exchange the private values of two classes. (Use call by reference method).

// Q 4. Write a C++ program that counts the total number of characters, words and lines in the file.
