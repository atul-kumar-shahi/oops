#include<iostream>
using namespace std;
class num
{
    int a,b,c;
    public:
    void show()
    {
        cout<<"The value of a = "<<a<<" b= "<<b<<" c= "<<c<<endl;
    }
    num(int x,int y,int z)
    {
        cout<<"constructor called  with three argument"<<endl;
        a=x;
        b=y;
        c=z;
    }
    num(int a,int b)
    {
        cout<<"constructor called with two parameter"<<endl;
    }
};
int main()
{
   num x(3,4,5); //inplicit call
   num y=num(7,8,9);//explicit called
   num(4,5);
   num z;

   x.show();
   y.show();
   
    // num y;
    return 0;
}