#include<iostream>
using namespace std;
class rectangle
{  
   int length;
   int breadth;
  
   public:
   void set(int l,int b)
   {
      length=l;
      breadth=b;

   }
   int area()
   {
    return length*breadth;
   }
};
int main()
{
    rectangle r1,r2;
    int length1,breadth1,length2,breadth2;
    cout<<"Enter the length and breadth of the rectangle first"<<endl;
    cin>>length1>>breadth1;
    cout<<"Enter the length and breadth of the rectangle second"<<endl;
    cin>>length2>>breadth2;
    r1.set(length1,breadth1);
    r2.set(length2,breadth2);
    cout<<"Area of the first rectangle is "<<r1.area()<<endl;
    cout<<"Area of the second rectangle is "<<r2.area()<<endl;
    return 0;
}