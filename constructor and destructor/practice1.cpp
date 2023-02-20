#include<iostream>
using namespace std;
class first
{
    int x ;
    float y;
    public:
    void show()
    {
        x++;
        y++;
        cout<<"x= "<<x<<" y="<<y<<endl;
    }
};
int main()
{
    static first a,b;
    a.show();
    b.show();
    return 0;
}