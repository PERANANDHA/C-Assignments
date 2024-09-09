#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    while(num2!=0){
        int remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
    cout<<"The GCD is: "<< num1<<endl;
    return 0;
}
