#include<iostream>
using namespace std;
int main(){
    int table,mul;
    cout<<"Enter the table number: ";
    cin>>table;
    cout<<"Enter the last value to be multiplied by table number: ";
    cin>>mul;
    for(int i=1;i<=mul;i++){
        cout<<table<<"x"<<i<<"="<<table*i<<endl;
    }
    cout<<"End of the Table!!";
    return 0;
}
