#include<iostream>
using namespace std;
class first
{
    int a,b,c;
    public:
    int x;
    first(void );
    void show()
    {
        cout<<"value of a ="<<a<<" b="<<b<<" c="<<c<<" x = "<<x<<endl;

    }
};
 first::first(void )
 {
    cout<<"constructor called "<<endl;
    x=5;a=0;b=1;c=2;
 }
 int main()
 {
    first s;
    s.show();
    return 0;
 }