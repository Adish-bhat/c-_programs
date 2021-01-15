// Create a base class SHAPE. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called triangle and rectangle from the base SHAPE. Add to the base class , a member function get_data() to innitialize base class data members and another member function display_area() to compute and display the areas of figure. Make display_area() a virtual function and redefine this function in the derived classes to suit their requirements.
// Using these three classes , design a program that will accept dimensions of a triangle or a rectangle interactively and display the area.
// Remember the two values given as input will be traeted as lengths of two sides in the case of rectangles, and as base and height in the case of triangles, and used as follows:
// Area of rect.- x*y     Area of Train.- ½ *x*y
// Extend this program to display area of circles. Thus addition of a new derived class “circle” that computes area of a circle. Remember , for circle we need only one value, its radius, but get_gata() in base class requires two values as arguments.
// Run the above program with the following modifications:
// A. Remove the definition of display_area() from one of the dervive classes.
// B. In addition to the change , declare display_area() as virtual in base class SHAPE.

#include <iostream>
#include <math.h>
using namespace std;
class Shape
{
public:
    double a, b;
    void get_data()
    {
        cin >> a >> b;
    }
    virtual void display_area() = 0;
};

class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of triangle " << 0.5 * a * b << endl;
    }
};

class Rectangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of rectangle " << a * b << endl;
    }
};
class circle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of circle " <<  2 * 3.14 * pow(a,2)<< endl;
    }
};

int main()
{
    Triangle t;
    Shape *st = &t;
    cout << "Enter base and height : ";
    st->get_data();
    st->display_area();

    Rectangle r;
    Shape *sr = &r;
    cout << "Enter length and breadth: ";
    sr->get_data();
    sr->display_area();
    
    circle c;
    Shape *sc = &c;
    cout<<"enter the radius :";
    sc->get_data();
    sc->display_area();
    return 0;
}