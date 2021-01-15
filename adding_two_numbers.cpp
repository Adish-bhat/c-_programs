#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;

    cout << "Enter two integers: ";
    cin >> a >> b;

    // sum of two numbers in stored in variable sum
    sum = a + b;

    // Prints sum
    cout << a << " + " << b << " = " << sum;
 
    return 0;
}