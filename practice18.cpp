//use of two friend function from different classes
#include<iostream>
using namespace std;
class second;
class third;
class first 
{
    int a;
    public :
    void getvalues()
    {
        cout<<"Enter the value of the first number"<<endl;
        cin>>a;
    }
    friend void sum(first,second,third);
};
class second
{
    int b;
    public:
    void getvalues()
    {
        cout<<"Enter the values of the second number"<<endl;
        cin>>b;
    }
    friend void sum(first,second,third);
};
class third
{
    int c;
    public:
    void getvalues()
    {
        cout<<"Enter the values of the third number"<<endl;
        cin>>c;
    }
    friend void sum(first ,second ,third);
    
};
void sum(first x,second y,third z)
{
    cout<<"sum of the member valriable of three class is "<<x.a+y.b+z.c<<endl;
}
int main()
{
    first o;
    second p;
    third q;
    o.getvalues();
    p.getvalues();
    q.getvalues();
    sum(o,p,q);
    return 0;
}