#include<iostream>
using namespace std;
class first
{
   int a[10];
   static int neg,pos,zero;
   public:
   void loop()
   {
      
      cout<<"Enter the numbers one by one "<<endl;
      for(int i=0;i<10;i++)
      {
        check(i);
      }
   }
   void check(int x)
   {
       
       cin>>x;
       if(x>0)
       pos++;
       else if(x<0)
       neg++;
       else
       zero++;
       
       
   }
   void display()
   {
        //    cout<<"positive number are "<<pos<<" ";
        //    cout<<endl<<"negative number are "<<neg<<" ";
        //    cout<<endl<<"Zeros are "<<zero<<" ";
           cout<<endl<<"total number of negative inputs are "<<neg<<endl;
           cout<<"total number of positive inputs are "<<pos<<endl;
           cout<<"total number of zero inputs are "<<zero<<endl;
   }

};
int first::neg=0;
int first::pos=0;
int first::zero=0;
int main()
{
    first f1;
    f1.loop();
    
    f1.display();
    return 0;
}
