#include<bits/stdc++.h>
using namespace std;
class num
{
    int n;
    int power;
    int ans;
    public:
    num(int r=9,int s=3)
    { 
      n=r;
      power=s;
      
    }
    void show()
    {
       ans= pow(n,power);
       cout<<n<<" raise to "<<power<<" is "<<ans<<endl;

    }
};
int main()
{
    num f1(3);
    f1.show();
    return 0;
}