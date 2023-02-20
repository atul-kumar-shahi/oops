#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1[10];
    for(int i=1;i<=5;i++)
    {
        cout<<"Enter the name for string s1["<<i<<"]   ";
        getline(cin,s1[i]);
    }
    for(int  j=1;j<=5;j++)
    {
      cout<<j<<". name : "<<s1[j]<<endl;
    }
    return 0;
}