#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=100;i<120;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    int result=sum/10;
    cout<<"The average of the 10 even numbers start from 100 is "<<result;
    return 0;
}
