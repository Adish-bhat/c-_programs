#include <iostream>
using namespace std;
class box
{
    int length, breadth, height;

public:
    void set_dimension(int length, int breadth, int height)
    {
        this-> length = length;
        this-> breadth = breadth;
        this-> height = height;
    }
    void display_dimensions()
    {
        cout << endl
             << "Length=" << length << endl
             << "Breadth=" << breadth << endl
             << "Height=" << height;
    }
};
main()
{
    box cakebox;
    cakebox.set_dimension(12, 23, 34);
    cakebox.display_dimensions();
}