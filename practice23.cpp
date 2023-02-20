#include<iostream>
using namespace std;
class num
{
    public:
    int tri_num(int n)
    {
        int f=0;
        if(n==0)
        return f;
        else
        f=f+n+tri_num(n-1);
        return f;

    }
};
int main()
{
    num m1;
    int number;
    cout<<"Enter the number for the triangle "<<endl;
    cin>>number;
   cout<< m1.tri_num(number);
    return 0;

}