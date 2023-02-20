#include<iostream>
#include<cstring>
using namespace std;
class first
{
    public :
    int a;
    float b;
    char c[10];
    string str;

};
int main()
{
    first d;
    cout<<"Enter any integer value"<<endl;
    cin>>d.a;
    cout<<"Enter any float value "<<endl;
    cin>>d.b;
    cout<<"Enter any character value "<<endl;
    cin.getline(d.c,10);
    cout<<"Enter any string "<<endl;
    getline(cin,d.str);
    cout<<"a = "<<d.a<<endl;
    cout<<"b = "<<d.b<<endl;
    cout<<"c = "<<d.c<<endl;
    cout<<"str = "<<d.str<<endl;
    return 0;
}