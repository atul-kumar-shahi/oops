#include<iostream>
#include<cstring>
using namespace std;
class first
{
     string s1;
     char f;
     char r;
     int len;
     public:
     void get()
     {
        cout<<"Enter any string "<<endl;
        getline(cin,s1);
        cout<<"Enter the character you want to change in  the string "<<endl;
        cin>>f;
        cout<<"Enter the character you want to replace with"<<endl;
        cin>>r;
        len=s1.length();

     }
     void display()
     {
        for(int i=0;i<len-1;i++)
        {
            if(s1[i]==f)
            s1[i]=r;
            
        }
        cout<<"The new string is s1 : "<<s1<<endl;
     }
    
};
int main()
{
    first a;
    a.get();
    a.display();
    return 0;
}