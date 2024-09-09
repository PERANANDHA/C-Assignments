#include<iostream>
using namespace std;
int main(){
    string var="food";
    string *ptr=&var;
    cout<<*ptr<<endl;
    return 0;
}
