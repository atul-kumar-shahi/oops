#include<iostream>
using namespace std;
class second;
class first
{
    int a;
    public:
    void get()
    {
        cout<<"Enter the value of the interger"<<endl;
        cin>>a;
    }
    void display()
    {
         cout<<"The entered value is "<<a<<endl;
    }
    friend void swap(first,second);
};
class second
{
    int b;
    public :
    void get()
    {
        cout<<"Enter the value of the interger"<<endl;
        cin>>b;

    }
    void display()
    {
        cout<<"Entered value of the interger is "<<b<<endl;
    }
    friend void swap(first,second);
};
void swap(first r,second s)
{
    int temp=r.a;
    r.a=s.b;
    s.b=temp;
    cout<<"value of a and b after swap"<<endl;
    cout<<"a= "<<r.a<<"b= "<<s.b<<endl;
}
int main()
{
    first A;
    second B;
    A.get();
    B.get();
    A.display();
    B.display();
    swap(A,B);
    return 0;
}
