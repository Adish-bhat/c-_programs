#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int temp = 0, rows;
    cout << "enter the number of rows:";
    cin >> rows;
    int space = rows - 1;
    for (int i = 0; i < rows; i++, --space)
    {
        while (temp <= space)
        {
            cout << "";
            ++temp;
        }
        for (int p = 0; p <= i; p++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    getch();
    return 0;
}
