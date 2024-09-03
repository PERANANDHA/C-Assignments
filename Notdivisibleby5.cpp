#include<iostream>
using namespace std;
int main(){
    int num[6];
    cout<<"Enter Six Numbers: ";
    for(int i=0;i<6;i++){
        cin>>num[i];
    }
    for(int i=0;i<6;i++){
        if(num[i]%5==0){
            continue;
        }
        else{
            cout<<"The numbers are not divisible by 5 is "<<num[i]<<endl;
        }
    }
    return 0;
}
