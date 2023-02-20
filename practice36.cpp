#include<iostream>
using namespace std;
class first
{
    int a;
    public:
    void get()
    {
        cout<<"Enter the value of interger"<<endl;
        cin>>a;
    }
    void show();
};
void first::show()
{
    cout<<"The value of a is "<<a;
}
int main()
{
    first A;
    A.get();
    A.show();
    return 0;
}