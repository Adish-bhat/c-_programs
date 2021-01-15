// #include <iostream>
// using namespace std;
// inline float multiply(float a, float b)
// {
//     return (a * b);
// }
// main()
// {
//     float a = 10.8;
//     float b = 30.0;
//     cout << multiply(a, b); //return (a*b);
// }



//recursive function to find factorial
#include <iostream>
using namespace std;
inline int factorial(int n)
{
    if (n>0)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
    
    
}
int main(int argc, char const *argv[])
{
    int n,f;
    cout<<"enter the number for knowing its factorial :";
    cin>>n;
    factorial(n);
    f = factorial(n);
    cout<<"factorial of number is :"<<f;
    return 0;
}
