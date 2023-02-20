#include<bits/stdc++.h>
using namespace std;
class car
{
    public:
    int a;

};
class maruti:private car
{
      int y;
      public:
      maruti()
      {a=20;
      y=30;
      }
      void show()
      {
        cout<<"the value of the a in base class  is "<<a<<endl;
        cout<<"The value of the y in derived class is "<<y<<endl;
      }
};
int main()
{
    maruti c1;
    c1.show();
    return 0;

}