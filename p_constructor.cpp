#include <iostream>
using namespace std;
class game
{
public:
    int number_Of_goals;
    game()
    {
        number_Of_goals = 0;
    }
    void increment()
    {
        ++number_Of_goals;
    }
    void display()
    {
        cout << number_Of_goals;
    }
};
int main()
{
    int n;
    cout << "\n How many goals? \t";
    cin >> n;
    game football;
    football.display();
    football.increment();
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        football.display();
        football.increment();
        cout << endl;
    }
    return 0;
}

