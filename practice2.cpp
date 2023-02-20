#include<iostream>
using namespace std;
class item
{
     private:
     int id,qty;
     float price;
     void values()
     {
        id=1234;
        price=34.5;
        qty=45;

     }
    public:
        void show()
        {
          values();
          cout<<"This is public section"<<endl;
          cout<<"id is  "<<id<<endl;
          cout<<"price is "<<price<<endl;
          cout<<"quantity is "<<qty<<endl;
        
        }
};
int main()
{
    item r1;
    // cout<<r1.values();
    r1.show();
    return 0;
}