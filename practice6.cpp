#include<iostream>
using namespace std;
class access
{
    private:
    int p;
    void getp()
    {
        cout<<"In getp() enter the value of p"<<endl;
        cin>>p;
        cout<<"value of p is "<<p<<endl;
    }
    protected:
    int y;
    void getm()
    {
        cout<<"In getm() enter the value of y"<<endl;
        cin>>y;
        cout<<"value of y is "<<y<<endl;
    }
    public:
    int g;
    void geth()
    {   cout<<g<<endl;
        cout<<"In geth() enter the value of g"<<endl;
        cin>>g;
        cout<<"value of g is "<<g<<endl;
        getp();
        getm();
    }
};
int main()
{
    access a1;
    a1.g=20;
    a1.geth();
    return 0;
}