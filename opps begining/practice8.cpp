#include<iostream>
using namespace std;
class data
{
    long i;
    float f;
    char c;

};
int main()
{
    data f1,f2;
    char i;
    cout<<sizeof(i)<<endl;
    cout<<"size of object f1 "<<sizeof(f1)<<endl;
    cout<<"size of object f2 "<<sizeof(f2)<<endl;
    cout<<"size of class "<<sizeof(data)<<endl;
    return 0;
}