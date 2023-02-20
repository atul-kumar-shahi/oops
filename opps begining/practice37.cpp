#include<iostream>
#include<cstring>
using namespace std;
class first
{
    char name[10];
    static int r;
    public:
    
    void get()
    {
        cout<<"Enter the name of the student"<<endl;
        cin>>name;
        r++;

    }
    void show()
    {
        cout<<"name of the student is : "<<name<<endl;
        
    }
     static void count()
    {
        cout<<"Total numbers of inpput :"<<r;
    }
    
};
    int first::r=0;

int main()
{
    first a,b;
    a.get();
    a.show();
    a.count();
    return 0;
}