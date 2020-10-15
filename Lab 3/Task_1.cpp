#include<iostream>
using namespace std;

class height
{
    int foot;
    int inch;

    public:
    void getdata()
    {
        cout<<"Enter height in foot and inches"<<endl;
        cout<<"foot: ";
        cin>>foot;
        cout<<"inch: ";
        cin>>inch;
    }

    void showdata(){
        cout<<"The height is "<<foot<<" foot "<<inch<<" inch"<<endl;
    }

    height operator ++()
    {
        height temp;
        temp.foot = ++foot;
        temp.inch = ++inch;
        return temp;
    }

    height operator ++(int){
        height temp;
        temp.foot = foot++;
        temp.inch = inch++;
        return temp;
    }
};

int main(){
    height h1, h2, h3;
    h1.getdata();
    h2 = ++h1;
    h3 = h2++;
    h1.showdata();
    h2.showdata();
    h3.showdata();
}
