#include<bits/stdc++.h>
using namespace std;
class first
{
    public:
    int x;
    first()
    {
        cout<<"you are in class first "<<endl;
        x=5;
        cout<<x<<endl;
    }
    class second
    {
        public:
        int y;
        second()
        {
            cout<<"you are in class second "<<endl;
            y=10;
            cout<<y<<endl;
        }
        class third
        {
            public :
            int z;
            third()
            {
                cout<<"you are in class third "<<endl;
                z=15;
                cout<<z<<endl;
            }
            
        };
    };

};
int main()
{
    first f1;
    first::second s1;
    first::second::third t1;
    return 0;
}