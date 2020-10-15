#include<iostream>
using namespace std;

class complex{
    float real;
    float imag;
    public:
    
    complex(){
        real = 0;
        imag = 0;
    }

    complex(float a, float b){
        real = a;
        imag = b;
    }

    void showdata(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    friend complex operator ++(complex &);
    friend complex operator ++(complex &, int);
};

complex operator ++ (complex &c){
    complex temp;
    temp.real = ++c.real;
    temp.imag = ++c.imag;
    return temp;
}

complex operator ++(complex &c, int){
    complex temp;
    temp.real = c.real++;
    temp.imag = c.imag++;
    return temp;
}
int main(){
    complex c1(3,4), c2(5,6), c3;
    c2 = ++c1;
    c3 = c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();
}