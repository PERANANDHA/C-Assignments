#include<iostream>
using namespace std;
int main(){
    int num,power;
    long result=1;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the power value: ";
    cin>>power;
    for(int i=0;i<power;i++){
        result*=num;
    }
    cout<<"The value is "<<result;
    return 0;
}
