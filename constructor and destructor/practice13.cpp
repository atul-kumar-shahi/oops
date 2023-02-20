#include<iostream>
using namespace std;
static int c;
class byte
{
    int bit;
    int bytes;
    public:
   
    byte()
    {
        cout<<"constructor invoked"<<endl;
        bit=64;
        bytes=64/8;
    }
     ~byte();
};
byte::~byte()
{
    if(c<2)
    {
        
        cout<<"destructor invoked"<<endl;
        cout<<"bits = "<<bit<<endl;
        cout<<"bytes = "<<bytes<<endl;

    }
    c++;
}
int main()
{
    byte f1,f2;
    return 0;
}