#include<bits/stdc++.h>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        x=20;
    }
    void show()
    {
        cout<<"value of x in base class is "<<x<<endl;

    }
};
class B:public A
{
    int y;
    public:
    B()
    {
        y=30;
    }
    void show1()
    {
        cout<<"you are in derived class "<<endl;
        show();
        cout<<"The value of y is "<<y<<endl;

    }

};
int main()
{
    B b;
    b.show1();
    return 0;
}