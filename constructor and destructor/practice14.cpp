#include<bits/stdc++.h>
using namespace std;
class first
{
    public:
    int x;
    A()
    {
        x=10;
    }
    class second
    {
        public:
        int y;
        void B()
        {
           y=20; 
        }
        void show()
        {
            first f;
            f.A();
            cout<<"value of x = "<<f.x<<endl;
            cout<<"value of y = "<<y<<endl;
        }
    };
};
int main()
{

    first ::second d;
    d.B();
    d.show();
    return 0;
}