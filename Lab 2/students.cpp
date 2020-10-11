#include<iostream>
using namespace std;

class student
{
    char name[25];
    int roll;
    float marks;
    char address[25];

    public:
    void getdata()
    {
        cout<<"Enter the student details as name, roll, marks, address : "<<endl;
        cin>>name>>roll>>marks>>address;
    }

    void showdata()
    {
        cout<<"The students details are: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Marks :"<<marks<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

int main()
{
    student s1;
    s1.getdata();
    s1.showdata();
}
