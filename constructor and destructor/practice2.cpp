#include<iostream>
using namespace std;
class first
{
    int a;
    public:
    first(void)
    {
        cout<<"constructor called   ";
        a=1;
        cout<<"a= "<<a<<endl;
    }
};
int main()
{
    first f,x,y;
    first d[2];
    return 0;
}