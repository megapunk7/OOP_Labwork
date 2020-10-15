#include<iostream>
using namespace std;

class length{
    int meter;
    int cmeter;
    public:
    length(){
        meter = 0;
        cmeter = 0;
    }

    length(int a, int b){
        meter = a;
        cmeter = b;
    }

    void showdata(){
        cout<<endl;
        cout<<"The distance is "<<meter<<"m "<<cmeter<<"cm"<<endl;
    }

    length operator +(length l){
        length temp;
        temp.meter = meter + l.meter;
        temp.cmeter = cmeter + l.cmeter;
        return temp;
    }
    
};

int main(){
    length l1(5, 4), l2(3, 4), l3;
    l3 = l2 + l1;
    l3.showdata();
    return 0;
}