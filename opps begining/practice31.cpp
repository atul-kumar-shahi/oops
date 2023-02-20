#include<iostream>
#include<cstring>
using namespace std;
class first
{
    char str[50];
    public:
    void get()
    {
        cout<<"Enter the string"<<endl;
        cin.getline(str,50);

    }
    int show(int x)
    {
        if(str[x]=='\0')
        return 0;
        else 
      {
        cout<<str[x];
        return 1;      
      }
    }

};
int main()
{
    first a;
    int k=-1;
    a.get();
   while(a.show(++k));
    return 0;
}