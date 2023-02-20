//write a pragram that will read a line of text .Replace all the blandk space with an underscore(_)
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
     string s1;
     cout<<"Enter the string "<<endl;
     getline(cin,s1);
     cout<<"Entered string : "<<s1<<endl;
     int d=s1.length();
     cout<<"length of the string is "<<d<<endl;

     for(int i=0;i<d;i++)
     {
        if(s1.at(i)=' ')
        s1.at(i)='_';
     }
     cout<<"string with underscore : "<<s1<<endl;
     return 0;
    
}