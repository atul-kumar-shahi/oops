#include<iostream>
#include<cstring>
using namespace std;
class first
{
    string name;
    void display()
    {
        cout<<"name is : "<<name<<endl;
    }
    public:
    void get()
    {
        cout<<"Enter you name "<<endl;
        getline(cin,name);
        display();
    }
};
int main()
{
    first f1;
    f1.get();
    return 0;
}