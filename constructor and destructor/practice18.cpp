#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class first
{
    static int c;
    public:
    first()
    {
        c++;
        cout<<"number of object created "<<c<<endl;

    }
    ~first()
    {
        cout<<"number of object destroyed "<<--c<<endl;

    }

};
int first::c;
int main()
{
    first a,b,c;
    cout<<"press any key to destroy the object "<<endl;
    getch();
    return 0;
}