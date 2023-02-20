#include<bits/stdc++.h>
using namespace std;
class first
{
    int bit;
    int byte;
    public:
    first()
    {
        cout<<"constructor invoked"<<endl;
        bit=64;
        byte=bit/8;
    }
    ~first()
    {
        cout<<"Distructor invoked "<<endl;
        cout<<bit<<endl;
        cout<<byte<<endl;
    }
};
int main()
{
    first a,b,c;
    // first();
    // a.first::~first();
    return 0;
}