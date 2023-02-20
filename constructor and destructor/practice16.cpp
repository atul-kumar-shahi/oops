#include<bits/stdc++.h>
using namespace std;
class first
{
    int a;
    first()
    {
        cout<<"constructor invoked "<<endl;
        a=3;
        cout<<a<<endl;
    }
    ~first()
    {
        cout<<"Distructor invoked"<<endl;
    }
    public:
    void show()
    {
        first();
        ~ first();

    }
};
int main()
{
    first f1;
    f1.show();
    return 0;
}