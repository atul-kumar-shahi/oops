// usage of const member function
#include<iostream>
using namespace std;
class A
{
    int c;
    public :
    void add(int a,int b) const
    {
        c=a+b;
        cout<<"a+b = "<<c<<endl;
    }

};
int main()
{
    A a;
    a.add(5,7);
    return 0;
}