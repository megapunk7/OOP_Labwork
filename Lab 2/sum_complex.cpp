#include<iostream>
using namespace std;

class complex
{
    float real, imag;

    public:
    complex()//Default Parameters
    {
        real = 0.0;
        imag = 0.0;

    }

    complex(float r, float i) //Parameterised Parameters
    {
        real = r;
        imag = i;
    }

    void showdata() //Method to show data
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    complex sum(complex c1, complex c2) //Method to add complex numbers
    {
        complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c2.imag + c2.imag;
        return temp;
    }
};

int main()
{
    complex C1(1,2), C2(2,3), C3;
    C3 = C3.sum(C1, C2);
    C3.showdata();

}