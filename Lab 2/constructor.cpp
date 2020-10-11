#include<iostream>
using namespace std;

class Parameter
{
    int a;
    int b;

    public:
    Parameter()
    {
        cout<<"Default Constructor: "<<endl;
        a = 0;
        b = 0;
    } 

    Parameter(int x, int y)
    {
        cout<<"Parameterised Constructor: "<<endl;
        a = x;
        b = y;
    }

    Parameter(Parameter &p)
    {
        cout<<"Copy Constructor: "<<endl;
        a = p.a;
        b = p.b;
    }

    ~Parameter()
    {
        cout<<"Clearing Memory!"<<endl;
    }

    void showdata()
    {
        cout<<"a= "<<a<<", "<<"b= "<<b<<endl;
        
    }
};

int main()
{
    Parameter p1, p2(3,4), p3(p2);
    p1.showdata();
    p2.showdata();
    p3.showdata();
    return 0;
}