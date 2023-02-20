#include<bits/stdc++.h>
using namespace std;
class A
{
   public:
   int x;

};
class B:public A
{
    public:
    int y;

};
int main()
{
    B b;
    b.x=20;
    b.y=30;
    cout<<"The value of x is "<<b.x<<endl;
    cout<<"The value of y is "<<b.y<<endl;
    return 0;
}