#include<iostream>
#include<cstring>
using namespace std;
class first
{
    public:
    string name;
    string capita;
    first(void);
};
first::first(void)
{
    cout<<"state name   : ";
    getline(cin,name);
    cout<<"its capital  : ";
    getline(cin,capita);
}
int main()
{
    first c[3];
    return 0;
}