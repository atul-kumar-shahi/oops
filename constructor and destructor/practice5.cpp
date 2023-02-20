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
        cout<<"constructor called "<<endl;
        a=x;
        b=y;
        c=z;
    }
};
int main()
{
   num x(3,4,5);
   num y=num(7,8,9);

   x.show();
   y.show();
   
    // num y;
    return 0;
}