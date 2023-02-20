#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1("c");
    string s2(" plus");
    string s;
    s=s1+s2+s2;
    cout<<"concatination of all the three string is "<<endl<<s;
    return 0;
}