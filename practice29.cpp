#include<iostream>
using namespace std;
class A
{
    public:
    void   main(int);   
    void main(double);
};
void A ::main(int r)
{
    cout<<"value of the interger is "<<r<<endl;
}
void A::main(double r)
{
    cout<<"value of float is "<<r<<endl;
}
int main()
{
    A a;
    a.main(12);
    a.main(12.56);
    return 0;
}