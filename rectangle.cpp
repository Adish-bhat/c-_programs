#include<iostream>
using namespace std;
struct rectangle
{
  double length, width;
  double area()
 {
    return length * width;
 }
 double perimeter()
 {
    return 2 * (length + width);
 }
};
void main()
{
    rectangle dimension;
    cout<<"Enter length and width of rectangle";
    cin>>dimension.length>>dimension.width;
    cout<<endl<<"Area of rectangle="<<dimension.area();
    cout<<endl<<"Perimeter of rectangle="<<dimension.perimeter();

}