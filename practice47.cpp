#include<iostream>
using namespace std;
class fibonacci
{
   
    public:
   
    int fib(int x)
    {
        int f;
        if(x==0)
        return 0;
        if(x==1)
        return 1;
        else 
        f=fib(x-1)+fib(x-2);
        return f;
    }
};
int main()
{
    int x;
    fibonacci d;
     cout<<"Enter the number "<<endl;
        cin>>x;
      cout<< d. fib(x);
    
    
    return 0;
}