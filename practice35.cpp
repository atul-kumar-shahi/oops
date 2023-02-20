#include<iostream>
using namespace std;
class first
{
    char name[20];
    int age;
    float height;
    float weight;
    public:
    void get();
    void show();

};
void first::get()
{
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your age"<<endl;
    cin>>age;
    cout<<"Enter your height "<<endl;
    cin>>height;
    cout<<"Enter your weight"<<endl;
    cin>>weight;
}
void first::show()
{
    cout<<"your name : "<<name<<endl;
    cout<<"your age  : "<<age<<endl;
    cout<<"your height : "<<height<<endl;
    cout<<"your weight  : "<<weight<<endl;

}
int main()
{
    first A;
    A.get();
    A.show();
    return 0;
}