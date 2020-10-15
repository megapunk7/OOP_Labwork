#include<iostream>
using namespace std;

class Matrix{
    int n[10][10];
    public:
    void getdata()
    {
        cout<<"Enter the elements of matrix in order: "<<endl;
        for (int i = 0; i<3; i++){
            for (int j=0; j<3; j++){
                cin>>n[i][j];
            }
            
        }
    }

    void showdata(){
        for (int i = 0; i < 3; i++){
            cout<<"|";
            for (int j = 0; j < 3; j++){
                cout<<" "<<n[i][j]<<" ";
            }
            cout<<"|"<<endl;
        }
    }

    Matrix operator *(Matrix a){
        Matrix temp;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                temp.n[i][j] = 0;
                for (int k = 0; k < 3; k++){
                    temp.n[i][j] += n[i][k] *a.n[k][j];
                }
            }
        }
        return temp;
    }
};

int main(){
    Matrix A, B, C;
    A.getdata();
    B.getdata();
    C = A * B;
    C.showdata();

}