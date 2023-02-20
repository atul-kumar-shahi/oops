#include<iostream>
using namespace std;
class second;
class third;
class first
{
    int a[5];
    public:
    void getvalues()
    { 
          cout<<"Enter five number"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
     friend void sum(first,second,third);
};
class second
{
    int b[5];
    public:
    void getvalues()
    {
        cout<<"Enter the five number "<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>b[i];
        }
    }
    friend void sum(first,second,third);
};
class third
{
    int c[5];
    public:
    void getvalues()
    {
        cout<<"Enter the five number "<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>c[i];
        }
    }
    friend void sum(first,second,third);
};
void sum(first r,second s,third t)
{
    cout<<"sum of the number corresponding to their index number are"<<endl;
    for(int j=0;j<5;j++)
    {
        
        cout<<r.a[j]+s.b[j]+t.c[j]<<"  ";
    }
}
int main()
{
    first A;
    second B;
    third C;
    A.getvalues();
    B.getvalues();
    C.getvalues();
    sum(A,B,C);
    return 0;
}