#include<bits/stdc++.h>
using namespace std;
class first
{
    protected:
    char name[30];
    int age;

};
class second:public first
{
    protected:
    float height;
    float weight;
    public:
    void getdata()
    {
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your age "<<endl;
        cin>>age;
        cout<<"Enter your height "<<endl;
        cin>>height;
        cout<<"Enter your weight "<<endl;
        cin>>weight ;


    }
    void showdata()
    {
        cout<<"your name is : "<<name<<endl;
        cout<<"your age is  : "<<age<<" years"<<endl;
        cout<<"your height is: "<<height<<" feet"<<endl;
        cout<<"your weight is: "<<weight<<" kg"<<endl;

    }
};
int main()
{
    second s1;
    s1.getdata();
    s1.showdata();
    return 0;
}