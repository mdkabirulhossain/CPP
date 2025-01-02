#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
        int accountNo;
        double balance;

    public:
        BankAccount(int acc, double balan) : accountNo(acc), balance(balan) {}

        void deposite(double amount){
            balance += amount;

            cout<<"Deposite Successfull Current Balance: "<<balance <<endl;
        }
        void withdraw(double amount){
            if(balance>= amount){
                 balance -= amount;
                 cout<<"Withdraw Successfull Current Balance: "<<balance <<endl;

            } else{
                cout<<"You have not enough Ballance. Your Current Balance: "<<balance <<endl;      
            }
            
        }
};

int main(){
    // cout<<"hey Iam good"<<endl;
    int BankAccountNo;
    double Balance;
    cout<<"Please enter Bank Accout Number: "<<endl;
    cin>> BankAccountNo;
    cout<<"Please enter Balance: "<<endl;
    cin>>Balance;

    BankAccount account1(BankAccountNo, Balance);

    cout<<"Before Withdraw: "<<Balance <<endl;

    account1.withdraw(100);

    account1.deposite(1000);


    return 0;
}