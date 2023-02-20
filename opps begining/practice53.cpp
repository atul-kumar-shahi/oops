#include<iostream>
using namespace std;
class first
{
    int a;
    static int c;
    public:
    void get()
    {
        cout<<"Enter any random value"<<endl;
        cin>>a;
        c++;

    }
    void count()
    {
        cout<<"Total inputs made "<<c<<endl;
    }

};
int first::c;
int main()
{
    first f,g;
    f.get();
    f.count();
    g.get();
    g.count();
    return 0;

}