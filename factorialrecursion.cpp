#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int num,fact;
    cout<<"Enter the number for factorial: ";
    cin>>num;
    fact=factorial(num);
    cout<<"\n"<<fact;
    return 0;
}
