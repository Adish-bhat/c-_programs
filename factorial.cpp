#include <iostream>
#include <stdio.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n *fact(n-1);
}
int main()
{
    int num;
    cout<<"enter the number :"<<endl;
    cin>>num;
    cout<<"factorial of "<<num<<" is"<<" "<< fact(num);
    return 0;
}