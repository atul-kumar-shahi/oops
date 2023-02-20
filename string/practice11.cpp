#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
     int s=0;
    cout<<"Enter any string"<<endl;
    getline(cin,s1);
    int d=s1.length();
    cout<<d<<endl;
    for(int i=0;i<d;i++)
    {
        if(s1.at(i)==' ');
        s++;

    }
    cout<<"value of s is"<<s<<endl;;
    cout<<"length of the string without any space is "<<d-s<<endl;
    return 0;
}