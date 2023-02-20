#include<iostream>
using namespace std;
class second;
class first
{
   int a;
   public:
   void get()
   {
    cout<<"Enter the value of the interger"<<endl;
    cin>>a;
   }
   void show()
   {
    cout<<"value of a is "<<a<<endl;
   }
   void friend sum (first,second);
};
class second
{
   int b;
   public:
   void get()
   {
    cout<<"Enter the value of the interger"<<endl;
    cin>>b;
   }
   void show()
   {
    cout<<"value of b is "<<b<<endl;
   }
   void friend sum (first,second);
};
void sum(first r,second s)
{
    cout<<"sum is "<< r.a+s.b<<endl;
}
int main()
{
    first A;
    second B;
    A.get();
    B.get();
    sum(A,B);
}




