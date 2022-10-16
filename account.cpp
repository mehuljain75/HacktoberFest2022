#include<iostream>
using namespace std;

class account
{
    int accno;
    float balance;
    public:
    void getdata()
    {
        cout<<"Enter account no:-";
        cin>>accno;
        cout<<"Enter balance";
        cin>>balance;
    }
    void display()
    {
        cout<<"account no is:-"<<accno<<endl;
        cout<<"balance is: "<<balance<<endl;
    }
    void transfer(account &acc, float amount)
    {
        balance=balance-amount;
        acc.balance=acc.balance+amount;
    }

};

int main()
{
    float transfer_money;
    account acc1,acc2;
    cout<<"Enter details of account 1 : ";
    acc1.getdata();
    cout<<"Enter details of account 2 : ";
    acc2.getdata();

    cout<<"\n account informations \n";
    acc1.display();
    cout<<"\n second \n";
    acc2.display();

    cout<<"\n how much money is to be transfered from acc1 to acc2 \n";
    cin>>transfer_money;

    acc2.transfer(acc1,transfer_money);

    cout<<"\n account \n";
    acc2.display();

    return 0;

}
