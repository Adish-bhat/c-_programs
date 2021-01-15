// #include <iostream>
// using namespace std;
// void comp(int num)
// {
//     int r;

//     if (num <= 1)
//     { 
//         cout << !num;
//         return;
//     }
//     r = num % 2;
//     comp(num / 2);
//     cout << !r;
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "enter the number :";
//     cin >> n;
//     if (n < 0)
//     {
//         cout << "complement is not possible";
//     }
//     else
//     {
//         cout << "complement form of "<< n << " is ";
//         comp(n);
//         cout << endl;
//     }

//     return 0;
// }



//complment from net
#include <iostream>
#define SZ 8
using namespace std;
int main()
{
    int i;
    char binary[SZ + 1], onesComp[SZ + 1];
    int error = 0;
    cout << "\n\n Find one's complement of a binary value:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a " << SZ << " bit binary value: ";
    cin >> binary;
    for (i = 0; i < SZ; i++) 
    {
        if (binary[i] == '1') 
        {
            onesComp[i] = '0';
        }
        else if (binary[i] == '0') 
        {
            onesComp[i] = '1';
        }
        else 
		{
            cout << "Invalid Input. Input the value of assign bits." << endl;
            error = 1;
            break;
        }
    }
    onesComp[SZ] = '\0';
    if (error == 0) 
    {
        cout << " The original binary = " << binary << endl;
        cout << " After ones complement the number = " << onesComp << endl;
    }
}