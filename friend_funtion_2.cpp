#include <iostream>
using namespace std;
class one;

//declare
class two
{
    int x;
public:
    void input()
    {
        cout << "enter value of y :";
        cin >> x;
    }
    void output()
    {
        cout << endl
             << "Second number is =" << x;
    }
    void friend greatest(two, one);
};
class one
{
    int y;

public:
    void input()
    {
        cout << "enter value of first no. : ";
        cin >> y;
    }
    void output()
    {
        cout <<  endl
             << "first no. is :" << y;
    }
    void friend greatest(two, one);
};
void greatest(two t, one o)
{
    if (t.x > o.y)
    {

        cout << endl
             << "greatest =" << t.x;
    }
    else
        cout << endl
             << "greatest is =" << o.y;
}

main()
{
    two t1;
    one o1;
    o1.input();
    cout << endl;
    o1.output();
    cout << endl;
    t1.input();
    cout << endl;
    t1.output();
    greatest(t1, o1);
}
