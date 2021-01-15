#include <iostream>
using namespace std;
class temp
{
    int cel, fah;
public:
    void input(void);
    void display(void)
    {
        fah = (cel*9.0)/5.0 + 32;
        cout << "temperature in fahrenheit :" << fah;
    }
};
void temp :: input(void)
{
    cout<<"enter the temperature in celcius :";
    cin>>cel;
}
int main()
{
    temp temperature;
    temperature.input();
    temperature.display();     
    return 0;
}
