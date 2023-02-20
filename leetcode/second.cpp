#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string a,b;
    string c;
    string d,e,x,y;

    getline(cin,a);
    getline(cin,b);
    cout<<a.length()<<" "<<b.length()<<endl;
    c=a+b; 
    cout<<c<<endl;
   int f=c.length();
   char s[f];

   for(int i=0;i<f;i++)
   {
      s[i]=c[i];
   }
   for(int i=0;i<f;i++)
   {
      if(i==0)
      d=s[i];
      if(i==f-1)
      d=d+s[i];
   }
   
   
   for(int j=f-2;j>0;j--)
   {
        if(j==f-2||j==1)
         x=x+s[j];
        
        if(j==2||j==f-3)
        y=y+s[j];
   
   }
    // e=strrev(y);
     cout<<d+x+y[1]+y[0];
    return 0;
}