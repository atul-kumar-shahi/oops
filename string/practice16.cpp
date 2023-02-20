#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    string s2;
    string s;
    cout<<"Enter the string "<<endl;
    getline(cin,s1);
    cout<<"The entered string is "<<s1<<endl;
    // s2=strrev(s1);
    int d=s1.length();
    int n=d-1;
    int j=n;
    for(int i=0;i<=n;i++)
    {
        s2[i]=s1[j];
        
        j--;
    }

    cout<<"reverse string of s1 is "<<s2<<endl;
    s=s1+s2;
    cout<<s<<endl;
    return 0;
}