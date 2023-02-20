#include<iostream>
using namespace std;
class first
{
    public:
    int a;
    float b;
    char c;
};
int main()
{
    first s;
    s.a=12;
    s.b=34.3;
    s.c='r';
    cout<<s.a<<endl;
    cout<<s.b<<endl;
    cout<<s.c<<endl;
    return  0;
    
}