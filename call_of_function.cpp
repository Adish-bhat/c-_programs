#include <iostream>
using namespace std;
void swap_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "value of a and b after swaping:" << a  << endl<< b;
}
void Swap_by_refrence(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "value after swaping :" << a<< endl<< b;
}
int main(int argc, char const *argv[])
{
    int num1, num2, choice;
    cout << "enter the first number :";
    cin >> num1;
    cout << "enter the secound number :";
    cin >> num2;
    cout << "1 : swapping by value"<<endl;
    cout << "2 . swaping by refrence"<<endl;
    cout << "enter choice :";
    cin >> choice;
    switch (choice)
    {
    case 1:
        swap_by_value(num1,num2) ;
    break;
    case 2:
        Swap_by_refrence(num1,num2) ;
    break;
    }
    return 0;
}
