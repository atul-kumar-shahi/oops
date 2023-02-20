#include<iostream>
using namespace std;
class A
{
    public:
    void main()
    {
        cout<<"In member function"<<endl;
    }
};
int main()
{
    A *a;
    a->main();
    return 0;
}