#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1("aaa");
    string s2("bbb");
    int d=s1.compare(s2);
    if(d==0)
    cout<<"string are equal"<<endl;
    else if(d>0)  cout<<"s1 is greater"<<endl;
    else cout<<"s2 is greater"<<endl;
    return 0;
}