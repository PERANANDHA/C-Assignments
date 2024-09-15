#include <iostream>
#include <string>
using namespace std;
class BankAccount{
private:
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount(int accNum,string holderName,double initialBalance){
        accountNumber=accNum;
        accountHolderName=holderName;
        balance=initialBalance;
    }
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Deposited: "<<amount<<" rupees"<<endl;
        } 
        else{
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount){
        if(amount>0&&amount<=balance){
            balance-=amount;
            cout<<"Withdrew: "<<amount<<" rupees"<<endl;
        } 
        else if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        } 
        else{
            cout<<"Invalid withdrawal amount"<<endl;
        }
    }
    void displayAccount() const{
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<" rupees"<<endl;
    }
};
int main(){
    BankAccount acc1(101,"Leo Das",500.0);
    BankAccount acc2(102,"John Durairaj",1000.0);
    cout<<"Initial account details:\n";
    acc1.displayAccount();
    acc2.displayAccount();
    cout<<"\nPerforming transactions for account 101:\n";
    acc1.deposit(200.0);
    acc1.withdraw(100.0);
    acc1.displayAccount();
    cout<<"\nPerforming transactions for account 102:\n";
    acc2.withdraw(1500.0);
    acc2.withdraw(500.0);
    acc2.displayAccount();
    return 0;
}
