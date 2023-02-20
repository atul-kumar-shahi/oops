#include<bits/stdc++.h>
using namespace std;
class first
{
    protected:
    int a;
    
};
class second:public first
{
    int b;
    public:
    second()
    {
        a=10;
        b=30;
    }
    ~second()
    {
        cout<<"value of the a in the base class is "<<a<<endl;
        cout<<"value of the v in the derieved class is "<<b<<endl;
    }
};
int main()
{
    second s1;
    return 0;
}