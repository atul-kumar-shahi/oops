#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string text("acd");

    // getline(cin,text);
    // cout<<text<<endl;
    text.insert(1,"b");
    cout<<text<<endl;
    return 0;
}