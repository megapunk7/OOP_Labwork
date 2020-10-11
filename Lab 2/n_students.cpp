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
    int n;
    student s[25];
    cout<<"Enter the number of students: "<<endl;
    cin>>n;

    for (int i =0; i< n; i++)
    {
        s[i].getdata();
    }
    
    for (int i =0; i< n; i++)
    {
        s[i].showdata();
    }
}
