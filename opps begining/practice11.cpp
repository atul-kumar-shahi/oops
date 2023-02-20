#include<iostream>
using namespace std;
class digit
{
    static int num[10];
    public:
    void input()
    {
        int n;
        cout<<"Enter the number "<<endl;
        cin>>n;
        check(n);
    }
    void check(int g)
    {
        int t;
        while(g!=0)
        {
            t = g % 10;
            num[t]++;
            g = g / 10;
            
        }
    }
    void show()
    {
        for(int i=0;i<10;i++)
        {
            if(num[i]==0)
            continue;
            cout<<"Number "<<i<<"appeared "<<num[i]<<" times"<<endl;
        }
    }
    void element()
    {
        for (int k = 0; k < 10; k++)
        {
            cout << num[k] << endl;
        }
    }
};
int digit ::num[]={0,0,0,0,0,0,0,0,0,0};
int main()
{
    int x;
    // cout<<"Enter the number you want to know how many digit are there"<<endl;
    // cin>>x;
    digit d1;
    d1.input();
    // d1.check();
    d1.show();
    d1.element();
    return 0;
}