#include<iostream>
using namespace std;
class first
{
    int a;
    void get()
    {
        cout<<"Enter the value of the interger"<<endl;
        cin>>a;
    }
    public:
    void show()
    {
        get();
        cout<<"Entered interger is "<<a;
    }
};
int main()
{
    first b;
    b.show();
    return 0;
}