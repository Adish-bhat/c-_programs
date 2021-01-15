#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char *name;
    float bill, unit, temp;
    cout << "Enter the name \t";
    cin >> name;
    cout << "enter the unit consumed\t";
    cin >> unit;
    if (unit <= 100)
    {
        bill = unit * 0.60;
    }
    else if (unit > 100 && unit <= 300)
    {
        bill = 60 + ((unit - 100) * 0.80);
    }
    else if (unit > 300)
    {
        bill = 60 + 160 + ((unit - 300) * 0.90);
    }
    else if (bill < 50)
    {
        bill = 50;
    }
    else if (bill > 300)
    {
        bill = (0.15 * bill) + bill;
        temp = 0.15;
    }
    cout << name << "\t"
         << "has been charged = " << bill << "\n"
         << "with subcharge = " << temp << "\n";
    getch();

    return 0;
}
