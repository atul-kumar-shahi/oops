#include<iostream>
using namespace std;
class first
{
    int age;
    public:
    void get()
    {
        cout<<"Enter the age "<<endl;
        cin>>age;
    }
    void check()
    {
        if(age>=18)
        cout<<"you are eligible to vote"<<endl;
        else
        cout<<"you are not eligible to vote"<<endl;

    }
};
int main()
{
    first f1;
    f1.get();
    f1.check();
    return 0;
}