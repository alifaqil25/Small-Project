#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double cArea (double);
double getCircumference (double);
double cDiameter (double);

double pi=3.1415;

int main()
{
    double radius;
    cout<<"Please enter the radius of the circle: ";
    cin>>radius;

    cout<<"The diameter of the circle is: "<<cDiameter(radius)<<"\nThe area of the circle is: "<<cArea(radius)<<"\nThe Circumference of the circle is: "<<getCircumference(radius)<<endl;

}
double cArea (double radius)
{
    double area;

    area=pi*pow(radius,2);
    return area;


}
double getCircumference (double radius)
{
    double circumference;

    circumference=2*pi*radius;

    return circumference;
}
double cDiameter(double radius)
{
    double diameter;

    diameter=2*radius;

    return diameter;
}
