#include<iostream>
using namespace std;
class first
{
    int a;
    first()
    {
        a=10;
    //cout<<a;
    }
    public:
   void disp()
   {
    first();
   }
    
};
int main()
{
    first *s;
    
    s->disp();
    return 0;
}