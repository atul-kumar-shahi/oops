#include<iostream>
using namespace std;
class first
{
    int d,m,y,h,mi,s;
    public:
    void show()
    {
        cout<<"Todays date is  : "<<d<<"-"<<m<<"-"<<y<<endl;
        cout<<"Time is "<<h<<":"<<mi<<":"<<s<<endl;
    }
    first(int d,int m,int y,int h,int mi,int s);
};
first::first(int a,int b,int c,int d,int e,int f)
{
    d=a;
    m=b;
    y=c;
    h=d;
    mi=e;
    s=f;
}
int main()
{
    first v=first(12,02,2023,10,50,33);
    v.show();
    return 0;
}