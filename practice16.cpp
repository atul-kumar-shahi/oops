// use of friend function 
#include<iostream>
using namespace std;
class ac
{
    char name[20];
    int acno;
    float balance;
    public:
    void input()
    {
        cout<<"Enter the name of the account holder"<<endl;
        cin>>name;
        cout<<"Enter the account number of the account holder"<<endl;
        cin>>acno;
        cout<<"Enter the balance present in the account"<<endl;
        cin>>balance;

    }
    friend void show(ac);
    
};
void show(ac a)
{
    cout<<"account number "<<a.acno<<" has rs"<<a.balance <<endl;
}
int main()
{
   ac r;
   r.input();
   show(r); 
}
