#include <iostream>
using namespace std;
int main()
{
    int n,salery[n];
    cin >> n;
    cin >> salery[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp < salery[i])
        {
            temp = salery[i];
        }
    }
    cout << "highest salery of the manager is :" << temp <<endl;
}
