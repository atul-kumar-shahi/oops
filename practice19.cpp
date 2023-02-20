#include<iostream>
using namespace std;
class second;
class first
{
    int e;
    public:
    void getvalues()
    {
        cout<<"Enter the value of the first number "<<endl;
        cin>>e;
    }
    friend void swap(first,second);
};
class second
{
    int f;
    public:
    void getvalues()
    {
        cout<<"Enter the value of  second number "<<endl;
        cin>>f;
    }
    friend void swap(first, second);
};
void swap(first t,second y)
{
    cout<<"e = "<<t.e<<" f = "<<y.f<<endl;
    int temp=t.e;
    t.e=y.f;
    y.f=temp;
    cout<<"e = "<<t.e<<" f = "<<y.f<<endl;
}
int main()
{
    first a;
    second b;
    a.getvalues();
    b.getvalues();
    swap(a,b);
    return 0;
}