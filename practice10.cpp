#include<iostream>
using namespace std;
class number
{
    static int c;
    int k;

    public:
    void zero()
    {
        k=0;
    }
    void count()
    {
        ++c;
        ++k;
        cout<<"value of c is "<<c<<"   Address of c is "<<&c<<endl;
        cout<<"value of k is "<<k<<"   Address of k is "<<&k<<endl;
        
    }
};
int number ::c=0; 
int main()
{
    number a,b,c;
    a.zero();
    b.zero();
    c.zero();
    a.count();
    b.count();
    c.count();
  
    return 0;
}