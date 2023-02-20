#include<iostream>
#include<cstring>
using namespace std;
int main()
{   static int c;
    string s1;
    string s2("aeiouAEIOU");
    cout<<"Enter the string "<<endl;
    getline(cin,s1);
    int l=s1.length();
    for(int j=0;j<l;j++)
  {  for(int i=0;i<10;i++)
    {
        if(s1.at(j)==s2.at(i))
        c++;
    }}
    cout<<"number of vowels present in the string is "<<c;
    return 0;

}