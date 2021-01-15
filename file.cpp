#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class book
{
    int id;
    char name[20];
    float price;

public:
    book()
    {
        id = 0;
        strcpy(name, "no book by this name");
        price = 0;
    }

    void input()
    {
        cout << "Enter details of the book";
        cin >> id >> name >> price;
    }
    void output()
    {
        cout << "id of the book is :" << id << endl
            << "name of the book is :" << name << endl
            << "price of the book is :" << price << endl;
    }
};
int main()
{
    book b;
    b.input();
    b.output();
    return 0;
}
     