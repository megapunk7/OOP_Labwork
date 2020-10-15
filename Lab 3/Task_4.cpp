#include<iostream>
using namespace std;

class complex{
    float real;
    float imag;
    public:

    complex(){
        real = 0.0;
        imag = 0.0;
    }

    complex(float a, float b){
        real = a; 
        imag = b;
    }

    void showdata(){
        cout<<endl;
        cout<<real<<" +"<<imag<<"i"<<endl;
    }

    friend complex operator +(complex, complex);
};

complex operator + (complex c1,complex c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main(){
    complex c1(2,3), c2(5.2, 4.9), c3;
    c3 = c1 + c2;
    c3.showdata();
    return 0;
}