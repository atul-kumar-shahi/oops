#include<bits/stdc++.h>
using namespace std;
int c=0;
class num
{
    public:
    num()
    {
        c++;
        cout<<"objected created :"<<c<<endl;
    }
    ~ num()
    {
        cout<<"object realesed "<<c<<endl;
        c--;
    }
};
int main()
{
    cout<<"in main"<<endl;
    num a,b;
    cout<<"in block a "<<endl;
    cout<<"again in main "<<endl;
    return 0; 
}