#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter the mark: ";
    cin>>mark;
    if(mark==100){
        cout<<"Grade A";
    }
    else if((mark<=99)&&(mark>=90)){
        cout<<"Grade B";
    }
    else if((mark<=89)&&(mark>=80)){
        cout<<"Grade C";
    }
    else if((mark<=79)&&(mark>=70)){
        cout<<"Grade D";
    }
    else if((mark<=69)&&(mark>=60)){
        cout<<"Grade E";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}
