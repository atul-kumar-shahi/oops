#include<iostream>
#include<cstring>
using namespace std;
class first
{
    int a;
    int b;
    public:
    int c;
    void get()
    {
        cout<<"Enter the value of the a and b"<<endl;
        cin>>a>>b;
    }
    void show()
    {
        cout<<"the value of the int inside the private sectinon is "<<a<<b<<endl;

    }
};
int main()
{
    first A;
    A.c=45;
    A.get();
    A.show();
    cout<<"value of z which is under public section is "<<A.c<<endl;
    return 0;
}