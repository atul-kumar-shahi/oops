#include<iostream>
using namespace std;
class first
{
    int c;
    public:
    void sum(int a,int b) const
    {
       // c=a+b; //wrong 
       cout<<a+b;
    }
};
int main()
{
    first f1;
    f1.sum(4,5);
    return 0;
}