// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[5];
//     int i;
//     cout << "enter the element of array A";
//     for (i = 0; i <= 4; i++)
//     {
//         cin >> A[i];
//     }
//     cout << endl
//          << "the elements entered are without using pointer=";

//     for (i = 0; i <= 4; i++)
//     {
//         cout << endl
//              << A[i] << endl;
//     }
//     cout << endl
//          << "the elements entered using pointer are =";

//     for (i = 0; i <= 4; i++)
//     {
//         cout << endl
//              << *(A + i);
//     }
//     return 0;
// }


//sorting of an array
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp;
    int a[n];
    int *p = a;
    cout<<"enter the number of elements :\t";
    cin>>n;
    cout<<"enter numbers :\t";
    for ( i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    for ( i = 0; i < n; i++)
    {
        for ( j= 0; j < n; j++)
        {
            if (p[j] > p[j+1])
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    cout<<"accending order of numbers :";
    for ( i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i+1];
    }
    return 0;
}

