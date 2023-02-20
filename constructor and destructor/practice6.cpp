#include<iostream>
using namespace std;
class first
{
    int a,b,c;
    public:
    first(void)
    {
        cout<<"non parameterized constructor called"<<endl;
        cout<<"the value of a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
    }
    first(int a,int b)
    {
        cout<<"constructor called with two parameter"<<endl;
        cout<<"the value of a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
    }
    first(int a ,int b,int c )
    {
         cout<<"constructor called with three parameter"<<endl;
        cout<<"the value of a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
    }

};
int main()
{
    first f;
    first f1(3,4);
    first f2(6,7,8);
    return 0;
}
