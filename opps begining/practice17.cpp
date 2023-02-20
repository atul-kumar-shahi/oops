#include<iostream>
using namespace std;
class second;
class first
{
    int a;
    public :
    void getvalue()
    {
        cout<<"Enter the value of the number"<<endl;
        cin>>a;

    }
    friend void sum(first,second);
};
class second 
{
    int b;
    public:
    void getvalue()
    {
        cout<<"Enter the value of the number"<<endl;
        cin>>b;

    }
    friend void sum(first ,second);
};
void sum(first t,second d)
{
    cout<<"sum of the two number  is "<<t.a+d.b<<endl;

}
int main()
{
    first g;
    second h;
    g.getvalue();
    h.getvalue();
    sum(g,h);
    return 0;
}