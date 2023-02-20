#include<iostream>
#include<cmath>
using namespace std;
class fun
{
    public:
    void num(int);
    void num(double);
};
void fun::num(int t)
{
    int ans;
    ans=abs(t);
    cout<<"absolute value of the number is "<<ans<<endl;
}
void fun ::num(double t)
{
    double fans;
    fans=fabs(t);
    cout<<"absolute value of the number is "<<fans<<endl;
}
int main()
{
    fun f;
    f.num(-26);
    f.num(-4.56756);
    return 0;
}