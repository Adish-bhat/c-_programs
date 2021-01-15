#include <iostream>
using namespace std;
int main()
{
    int dd, mm, yyyy;
    cout << "Enter date in format Date/Month/Year:";
    cin >> dd >> mm >> yyyy;
    if (yyyy > 0)
    {
        if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12 && dd > 0 && dd <= 31)
            cout << "Date is Valid";
        else

            if (mm == 4 || mm == 6 || mm == 9 || mm == 11 && dd > 0 && dd <= 30)
            cout << "Date is Valid";
        else if (mm == 2)
        {
            if ((yyyy % 4 == 0 || (yyyy % 1 != 0 && yyyy % 1 == 0)) && dd > 0 && dd <= 29)
                cout << "Date is Valid";
            else if (dd > 0 && dd <= 28)
                cout << "Date is Valid";
            else
                cout << "Date is Invalid";
        }
        else
            cout << "Date is Invalid";
    }
    else
        cout << "Date is Invalid";
    return 0;
}
