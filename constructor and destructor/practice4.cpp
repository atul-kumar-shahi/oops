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
    num(void);

};
 num::num(void)
 {
    cout<<"constructor called"<<endl;
    cout<<"Enter the values of a b and c"<<endl;
    cin>>a>>b>>c;

 }
 int main()
 {
    num e;
    e.show();
    return 0;
 }