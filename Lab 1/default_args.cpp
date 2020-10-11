#include<iostream>
using namespace std;

int volume(int l, int b = 2, int h = 1)
{
    return (l*b*h);
}

int main()
{

    cout<<"The volume with breadth and height as deafult arguments is: "<<volume(1)<<endl;
    cout<<"The volume with height as deafult arg is: "<<volume(1,3)<<endl;
    cout<<"The volume with no default args is: "<<volume(1,3,4)<<endl;
}