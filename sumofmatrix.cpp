#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number of rows and columns: ";
    cin>>a>>b;
    int mat1[a][b],mat2[a][b],add[a][b];
    cout<<"Enter 1st matrix1: ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter 2nd matrix2: ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mat2[i][j];
        }
    }
    cout<<"The sum of two matrix1 and matrix2: ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            add[i][j]=mat1[i][j]+mat2[i][j];
           cout<<add[i][j]<<" ";
        } 
      cout<<"\n";
    }
    return 0;
}
