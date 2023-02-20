#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string "<<endl;
    getline(cin,s1);
    int d=s1.length();
    for(int i=0;i<d;i++)
    {
        cout<<s1.at(i)<<endl;
    }
    return 0;
}