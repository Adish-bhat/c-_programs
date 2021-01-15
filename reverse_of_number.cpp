#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long int n, rev, a, a1, b, b1, c, c1;
    cout << "enter the nunmber";
    cin >>n ;
    cout << endl;
    cout<<"\n reverse of the number is =\t";
    a = n / 10;
    a1 = n % 10;
    b = a / 10;
    b1 = a % 10;
    c = b / 10;
    c1 = b % 10;
    rev = a1 * 100 + b1 * 10 + c1 * 1;
    cout << rev;
    return 0;
}
