#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the first string "<<endl;
    getline(cin,s1);
    cout<<"Enter the second string "<<endl;
    getline(cin,s2);
    s1.swap(s2);
    cout<<"string s1 : "<<s1<<endl;
    cout<<"string s2 : "<<s2<<endl;
    return 0;
}