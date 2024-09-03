#include <iostream>
using namespace std;
int main(){
    int fact=1,num;
    cout<<"Enter the Number: ";
    cin>>num;
    if(num>0){
        for(int i=1;i<=5;i++){
            fact=fact*i;
        }
        cout<<"The factorial of "<<num<<" is "<<fact;
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}
