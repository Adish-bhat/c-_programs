#include <iostream>
using namespace std;
class path
{
    float a;
public:
    void input()
    {
        cout << "enter the distance in kilometres :";
        cin >> a;
    }
    void friend distance(path);
    void friend dis(path);
};
void distance(path x)
{
    x.a = x.a / 1000;
    cout << "distance in metre :" << x.a << endl;
}
void dis(path x)
{
    x.a = x.a / 100000;
    cout << "distance in centimetre :" << x.a << endl;
}
int main()
{
    path x0;
    x0.input();
    distance(x0);
    dis(x0);
 