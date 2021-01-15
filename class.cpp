// #include <iostream>
// using namespace std;
// class item
// {
//     int number;
//     float cost;

// public:
//     void getData(int a, float b);

//     void readData()
//     {
//         cout << endl
//              << "Number=" << number << endl
//              << "COst=" << cost;
//     }
// };
// void item ::getData(int a, float b)
// {
//     number = a;
//     cost = b;
// }
// main()
// {
//     item I1;
//     I1.getData(12, 200.50);
//     I1.readData();
// }



// another one
#include<iostream>
using namespace std;
class item
{
int number;
float cost;
public:

    void getData();

    void readData()
    {
    cout<<endl<<"Number="<<number<<endl<<"COst="<<cost;
    }
};
void item :: getData()
{ cout<<"enter the number and cost of item";
    cin>>number>>cost;
    }
main()
{
item I[3];
int i;
for(i=0;i<3;i++)
{

    I[i].getData();
    I[i].readData();

}

