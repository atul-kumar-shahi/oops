#include<iostream>
using namespace std;
class convert
{
    int hour;
    public :
    void get()
    {
        cout<<"Enter the value in hour format"<<endl;
        cin>>hour;
    }
    void show()
    {
        cout<<hour<<" hour  is equal to "<<hour*60<<" minutes"<<endl;
        cout<<hour<<" hour  is equal to "<<hour*60*60<<" seconds"<<endl;
    }
};
int main()
{
    convert a;
    a.get();
    a.show();
    return 0;
}