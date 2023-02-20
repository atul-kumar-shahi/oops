#include<iostream>
using namespace std;
int j,k,l,m;
class A
{
    int a;
    int j;
    public :
    void get()
    {
        cout<<"Enter the values of a,j,j and k "<<endl;
        cin>>a>>j>>::j>>k;
    }
    void show()
    {
        cout<<"a= "<<a<<" j= "<<j<<" k= "<<k<<" ::j = "<<j<<endl;
    }
};
int main()
{
    class B
    {
        int b;
        int l;
        public:
        void get()
        {
            cout<<"Enter the values of b,l,l and m"<<endl;
            cin>>b>>l>>::l>>m;
        }
        void show()
        {
            cout<<"b= "<<b<<" l="<<l<<" m="<<m<<" ::l= "<<::l<<endl;
        }
    };
    A x;
    B y;
    x.get();
    y.get();
    x.show();
    y.show();
    return 0;
}