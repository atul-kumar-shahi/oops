#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1("aaa");
    string s2("aaa");
    if(s1>s2)  cout<<"s1 is greater"<<endl;
    else if(s1==s2) cout<<"s1 and s2 are equal"<<endl;
    else cout<<"s2 is greater"<<endl;
    return 0;
    
}