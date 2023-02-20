#include<iostream>
using namespace std;
void fun();
class first
{
    public :
    void display()
    {
        cout<<"You are on earth"<<endl;
    }
};
int main()
{
    fun();
    return 0;
}
void fun()
{
    first k;
    k.display();
    cout<<"you are on the moon"<<endl;
}

