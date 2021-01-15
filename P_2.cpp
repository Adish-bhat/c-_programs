// #include <iostream>
// #include <stdio.h>
// using namespace std;
// class student
// {
// private:
//     int age,standard;
//     char first[100],last[100];
// public :
//     void get_data()
//     {
//         cin >> age >> first >> last >> standard;
//     }
//     void set_data()
//     {
//         cout << age << "\n";
//         cout << last << "," <<" "<< first <<endl;
//         cout << standard <<endl;
//         cout << "\n";
//         cout << age << "," << first <<","<< last <<","<< standard<<endl;
//     }

// };

// int main()
// {
//     student st;
//     st.get_data();
//     st.set_data();
//     return 0;
// }
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, a[10][10], i, j;
    int m = 5;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
