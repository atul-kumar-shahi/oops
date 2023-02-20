#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter the name of the person"<<endl;
    cin>>name;
    cout<<"Reverse of the string is "<<strrev(name)<<endl;
    return 0;
}