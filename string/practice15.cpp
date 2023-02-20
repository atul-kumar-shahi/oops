#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    string s2("aeiou ");
    cout<<"Enter the string"<<endl;
    getline(cin,s1);
    int d=s1.length();
    int c=0;
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(s1.at(i)==s2.at(j))
            c++;
        }
    }
    cout<<"number of space and number of vowels is "<<c;
    return 0;
}