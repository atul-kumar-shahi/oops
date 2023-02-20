#include<iostream>
#include<cstring>
using namespace std;
class first
{
    string s1;
    string s2;
    public:
    void get()
    {
        cout<<"Enter any string in small case "<<endl;
        getline(cin,s1);
        
    }
    void display()
    {
        int d=s1.length();
        int count=0;
        // cout<<"length of the string is "<<d;
        for(int i=0;i<d-1;i++)
        {
             if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
             {
                cout<<s1[i]<<" ";
                count++;
             }
             

        }
        cout<<endl<<"There are "<<count<<" vowels present in the string"<<endl;

    }
};
int main()
{
    first A;
    A.get();
    A.display();
    return 0;
}
