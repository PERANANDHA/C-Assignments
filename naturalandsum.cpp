#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<i<<"\n";
        sum+=i;
    }
    cout<<"The sum of the natural numbers: "<<sum;
    return 0;
}
