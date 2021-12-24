#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void conv(double,string);

int main()
{

    double mass;
    string unit;

    do
    {
        cout<<"Enter the weight to convert : ";
        cin>>mass>>unit;

        conv(mass,unit);

    }while(mass!=-1);
}

void conv(double mass,string unit)
{
    double a=2.204623;

    if(unit == "kgs" || unit == "kg")
        cout << mass << " kgs equals " << mass*a << " lbs\n";
    else if(unit == "lbs" || unit == "lb")
        cout << mass << " lbs equals " << mass/a << " kgs\n";
    else
        cout << "invalid unit" << endl;
}
