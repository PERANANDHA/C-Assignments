#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<=1){
        cout<<num<<" is not a prime number"<<endl;
    } 
    else{
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                cout<<num<< " is not a prime number"<<endl;
                return 0;
            }
        }
        cout<<num<<" is a prime number"<<endl;
    }
    return 0;
}
