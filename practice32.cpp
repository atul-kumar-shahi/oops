#include<iostream>
#include<cstring>
using namespace std;
class first
{
   string s1,s2,s;
   public :
   void get()
   {
    cout<<"Enter the first string "<<endl;
    getline(cin,s1);
    cout<<"Enter the second string "<<endl;
    getline(cin,s2);

   }
   void show()
   {
    cout<<"first string : "<<s1<<endl;
    cout<<"second string : "<<s2<<endl;
     s=s1+s2;
     cout<<"concatination of both the string is "<<endl;
     cout<<s<<endl;
   }
};
int main()
{
    first a;
    a.get();
    a.show();
    return 0;
}