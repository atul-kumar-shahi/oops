#include<bits/stdc++.h>
using namespace std;
class first
{
    int n;
    public:
    first() {}
    first(int k)
    {
        n=k;
    }
    first(first &j)
    {
        n=j.n;
    }
    void show()
    {
        cout<<"value of n is "<<n<<endl;
    }
};
int main()
{
   
    first j(50);
    first k(j);
    first L=j;
    first m;
    m=j;
    cout<<"object j value of n is "<<endl;
    j.show();
    cout<<"object k value of n is "<<endl;
    k.show();
    cout<<"object L value of n is "<<endl;
    L.show();
    cout<<"object m value of n is "<<endl;
    m.show();
  
    return 0;
}
