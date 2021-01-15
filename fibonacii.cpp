#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1 = 0, num2 = 1, temp, n;
    cout << "enter the range of fibonacii number : ";
    cin >> n;
    cout<<"fibonacii series :"<<num1<<","<<num2<<",";
    temp = num1 + num2;
    while (temp <= n)
    {
        cout << temp << ",";
        num1 = num2;
        num2 = temp;
        temp = num1 + num2;
    }
    return 0;
}
