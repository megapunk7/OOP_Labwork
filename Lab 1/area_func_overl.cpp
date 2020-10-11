#include<iostream>
#define PI 3.14
using namespace std;

void area(int radius)
{
    float a;
    a = PI *(radius*radius);
    cout<<"The area of circle is: "<<a<<endl;
}

void area(int length, int breadth)
{
    float a;
    a = length * breadth;
    cout<<"The area of rectangle is: "<<a<<endl;
}

int main()
{
    int r, l, b;
    cout<<"Enter radius of circle: "<<endl;
    cin>>r;
    cout<<"Enter length and breadth: "<<endl;
    cin>>l>>b;
    area(r);
    area(l, b);    
}
