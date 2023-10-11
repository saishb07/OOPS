#include<iostream>
using namespace std;

class details
{
    private:
    string name,pan;
    string acc_no;
    string mobile;
    int depo;
    public:
    int balancee=0;
    void get_data()
    {
        cout<<"Enter your name";
        cin>>name;
        cout<<"Enter your Mobile no:";
        cin>>mobile;
        cout<<"Enter your account no:";
        cin>>acc_no;
        cout<<"Enter your PAN";
        cin>>pan;
    }
    void put_data()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Account No:"<<acc_no<<endl;
        cout<<"Mobile No:"<<mobile<<endl;
        cout<<"PAN:"<<pan<<endl;
    }
    void balance()
    {
        cout<<"Balance:"<<balancee<<endl;
    }
    void deposit()
    {
        cout<<"Enter the amount to be deposited:";
        cin>>depo;
        balancee=balancee+depo;
    }
};

class maojor_acc:public details
{
    private:
    int wd;
    public:
    void withdraw()
    {
        cout<<"Enter the amout to withdraw:";
        cin>>wd;
        if(balancee-wd>=500)
        {
            balancee=balancee-wd;
            cout<<"Amount Withdrawed"<<endl;
        }
        else
        {
            cout<<"Cannot Withdraw (minimal balance)"<<endl;
        }
    }

};

class minor_acc:public details
{

};

int main()
{
    details a;
    maojor_acc b;
    minor_acc c;
    string type;
    int choice;
    cout<<"Enter your account type (Major/Minor):";
    cin>>type;
    if(type=="Major")
    {
        b.get_data();
        while (choice!=4)
        {
        cout<<"Select:\n1.Deposit\n2.Withdraw\n3.Balance\n4.Exit\nEnter choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:b.deposit();break;
        case 2:b.withdraw();break;
        case 3:b.balance();break;
        case 4:cout<<"Exit"<<endl;break;
        default:cout<<"Retry";break;
        }
        }
    }
    else if(type=="Minor")
    {
        c.get_data();
        while (choice!=3)
        {
        cout<<"Select:\n1.Deposit\n2.Balance\n3.Exit\nEnter choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:c.deposit();break;
        case 2:c.balance();break;
        case 3:cout<<"Exit"<<endl;break;
        default:cout<<"Retry";break;
        }
        }

    }
    return 0;
}
