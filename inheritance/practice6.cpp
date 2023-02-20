#include<bits/stdc++.h>
using namespace std;
class Triangle
{
    protected:
    Triangle()
    {
        cout<<"This is in triangle section"<<endl;
    }
};
class Equilateral:public Triangle
{
    protected:
    Equilateral()
    {
        cout<<"This is in equilateral triangle"<<endl;
    }
};
class Isoceles:public Equilateral
{
    public:
    Isoceles()
    {
        cout<<"This is in isoceles triangle"<<endl;
    }
};
int main()
{
    Isoceles first;
    return 0;
}