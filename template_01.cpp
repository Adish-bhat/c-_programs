//using constuctor

// #include <iostream>
// using namespace std;
// template <class T, class U>
// class A
// {
//     T x;
//     U y;

// public:
//     void input(T a, U b)
//     {
//         x = a;
//         y = b;
//     }
//     void output()
//     {
//         cout << x;
//     }
// };
// int main()
// {
//     A<int, char> a1;
//     a1.input(12, 'a');
//     a1.output();
//     return 0;
// }

// Write a program to swap two numbers without help of a third variable using function template.
// #include <iostream>
// using namespace std;
// template <class T>
// void swap(T a, T b) //Function Template
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int x1 = 4, y1 = 7;
//     float x2 = 4.5, y2 = 7.5;
//     cout << "Before Swap:";
//     cout << "\nx1=" << x1 << "\ty1=" << y1;
//     cout << "\nx2=" << x2 << "\ty2=" << y2;
//     swap(x1, y1); // integer values
//     swap(x2, y2); // float values
//     cout << "nnAfter Swap:";
//     cout << "\nx1=" << x1 << "\ty1=" << y1;
//     cout << "\nx2=" << x2 << "\ty2=" << y2;
//     return 0;
// }

// Write a class template that shows the working of a calculator.

// #include <iostream>
// using namespace std;
// template <class T>
// class Calculator
// {
// private:
//     T num1, num2;

// public:
//     Calculator(T n1, T n2)
//     {
//         num1 = n1;
//         num2 = n2;
//     }

//     void display()
//     {
//         cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
//         cout << "Addition of numbers: " << add() << endl;
//         cout << "Subtraction of numbers: " << subtract() << endl;
//         cout << "Product of numbers: " << multiply() << endl;
//         cout << "Division of numbers: " << divide() << endl;
//     }
//     T add() { return num1 + num2; }
//     T subtract() { return num1 - num2; }
//     T multiply() { return num1 * num2; }
//     T divide() { return num1 / num2; }
// };
// int main()
// {
//     Calculator<int> intCalc(2, 1);
//     Calculator<float> floatCalc(2.4, 1.2);
//     cout << "Int results:" << endl;
//     intCalc.display();
//     cout << "Float results:" << endl;
//     floatCalc.display();
//     return 0;
// }

// Write a function template to accept array of 5 numbers.
#include <iostream>
#define size 5
using namespace std;
template <class T>
T get(T x[], T number)
{
    int i;
    cout << "\nYour Data   :";
    for (i = 0; i < size; i++)
    {
        cout << "\t" << x[i];
    }
    for (i = 0; i < size; i++)
    {
        if (x[i] == number)
        {
            cout << "\nnumber Found at the Position :" << i + 1 << endl;
            break;
        }
    }
    if (i == size)
        cout << number << "  : Not Found \n";
}
int main()
{
    int arr[size], i, number;
    cout << "\nEnter " << size << " numbers for Searching Int : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number to Search:";
    cin >> number;
    get(arr, number);
    return 0;
}