#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main(){
    char str[100],str1[100];
    int flag=1,j=0;
    cout<<"Enter the string: ";
    cin.getline(str,100);
    int len=0;
    while(str[len]!='\0'){
        if(isalpha(str[len])){
        str1[j++]=tolower(str[len]);
        }
        len++;
    }
    str1[j]='\0';
    int filtered=j;
    for(int i=0;i<filtered/2;i++){
        if(str1[i]!=str1[filtered-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"It is not a palindrome";
    }
    else{
        cout<<"It is a palindrome";
    }
    return 0;
}
