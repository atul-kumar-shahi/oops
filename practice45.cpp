#include<iostream>
using namespace std;
class number
{
    int a[10];
    public:
    void get()
    {   for(int i=0;i<10;i++)
        {
              cout<<"Enter the "<<i+1<<" number"<<endl;
              cin>>a[i];
        }
    }
    
    void show()
    {
        cout<<"Entered numbers are"<<endl;
        for(int j=0;j<10;j++)
        {
            cout<<j+1<<". ="<<a[j]<<endl;
        }
    }
    void greatest()
    {
        int g;
        for(int h=0;h<10;h++)
        {
            
            if(a[h]>a[h+1])
            g=a[h];
        }
        cout<<"greatest number is "<<g<<endl;
    }

};
int main()
{
    number n1;
    n1.get();
    n1.show();
    n1.greatest();
    return 0;

}