#include<iostream>
using namespace std;
class number
{
    static int c;
    public:
    void check(int n)
    {
        if(n%2!=0&&n%3!=0&&n%5!=0)
        {
            cout<<n<<" ";
            c++;
        }
    }
    void total()
    {
        cout<<endl<<"total number are "<<c;
    }
    void loop()
    {
        cout<<"number which are not divisible by 2 , 3 and 5 are "<<endl;
        for(int i=0;i<100;i++)
        {
            check(i);
        }
    }

};
int number::c;
int main()
{
    number n1;
    n1.loop();
    n1.total();
    return 0;
}