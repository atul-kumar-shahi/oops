#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   string s1;
   cout<<(s1.empty()) ? true:false;
   cout<<"Enter the string "<<endl;
   getline(cin,s1);
   (s1.empty()) ? true:false;
   return 0;
}