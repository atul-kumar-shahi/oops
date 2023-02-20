#include<iostream>
#include<cstring>
using namespace std;
class s2;
class s3;
class s1
{
     string str1;
     public:
     void read()
     {
        cout<<"Enter the first string "<<endl;
        getline(cin,str1);

     }
     friend string concat(s1,s2);
};
class s2
{
    string str2;
    public :
    void read()
    {
        cout<<"Enter the second string "<<endl;
        getline(cin,str2);

    }
    friend string concat(s1,s2);
};
class s3
{
    string str3;
    public:
    void get(string s4)
    {
        str3=s4;
    }
    void display()
    {
        cout<<str3<<endl;
    }

};
string concat(s1 o,s2 p)
{
    string str=o.str1+p.str2;
    return str;
}
int main()
{
    s1 a;
    s2 b;
    s3 c;
    a.read();
    b.read();
    string t=concat(a,b);
    c.get(t);
    c.display();

    return 0;
}