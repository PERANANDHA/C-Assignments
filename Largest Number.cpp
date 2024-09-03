#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if ((a>b)&&(a>c)){
        cout<<"\nThe largest number is: "<<a;
    }
    else if ((b>a)&&(b>c)){
        cout<<"\nThe largest number is: "<<b;
    }
    else{
        cout<<"\nThe largest number is: "<<c;
    }
    return 0;
}
