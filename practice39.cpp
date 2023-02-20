#include<iostream>
using namespace std;
class first
{
    int a;
    static int b;
    public :
    void get()
    {
        cout<<"Enter the value of the integer"<<endl;
        cin>>a;
        b++;
    }
    void show()
    {
        cout<<"value of the integer is "<<a<<endl;
    }
    static void count()
    {
        cout<<"times of the input data is "<<b;
    }
};
int first::b;
int main()
{
   first A,B;
   A.get();
   B.get();
   A.show();
   B.show();
   A.count();
   return 0;
}