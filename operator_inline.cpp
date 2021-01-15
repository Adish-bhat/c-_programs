#include <iostream>
using namespace std;
inline int add(float a, float b)
{
    return (a + b);
}
inline float division(float a, float b)
{

    return (a / b);
}
inline float subtraction(float a, float b)
{
    return (a - b);
}
inline int mod(int p, int q)
{
    return (p % q);
}
inline int multiplication(int a, int b)
{
    return (a * b);
}
int main()
{
    float a, b;
    float p, q;
    int choice;
    cout << "\nEnter the numbers:\n";
    cin >> a >> b;
    p = int(a);
    q = int(b);
    cout << "\nEnter the Choice[1,2,3,4] for\n"
         << "> 1 - ADD \n"
         << "> 2 - Subtract\n"
         << "> 3 - Multiplication\n"
         << "> 4 - Division\n"
         << "> 5 - Modulus\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Sum of " << a << " & " << b << "  is: " << add(a, b) << endl;
        break;
    case 2:
        cout << "Subtraction of " << a << " & " << b << "  is: " << subtraction(a, b) << endl;
        break;
    case 3:
        cout << "Multiplication of " << a << " & " << b << "  is: " << multiplication(a, b) << endl;
        break;
    case 4:
        cout << "Division of " << a << " & " << b << "  is: " << division(a, b) << endl;
        break;
    case 5:
        cout << "Modulus of " << a << " & " << b << "  is: " << mod(p, q) << endl;
        break;
    default:
        cout << "INVALID CHOICE\n";
        break;
    }
    return 0;
}