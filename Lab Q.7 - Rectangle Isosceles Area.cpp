//Using Inheritance, Parameterized constructor.
#include<iostream>
using namespace std;
class area_cl
{
public:
    double height;
    double width;
};
class rectangle : public area_cl
{
public:
    rectangle(double h, double w)
    {
        height=h;
        width=w;
    }
    double area()
    {
        return (height*width);
    }
};
class isosceles : public area_cl
{
public:
    isosceles(double h, double w)
    {
        height=h;
        width=w;
    }
    double area()
    {
        double a;
        a=0.5*(height*width);
        return a;
    }
};

int main()
{
    rectangle r1(5,7);
    double result;
    result=r1.area();
    cout<<"The area of a Rectangle is: "<<result<<endl;
    isosceles i(5,7);
    result=i.area();
    cout<<"The area of isosceles triangle is : "<< result<<endl;

    return 0;
}
