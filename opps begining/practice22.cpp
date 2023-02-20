#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    void fun() volatile
    {
        int x=10;
        cout<<"Value of x is "<<x++<<endl;
        cout<<x;
        
    }

};
int main()
{
    volatile A c;
    c.fun();
    return 0;
}