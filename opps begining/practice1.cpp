#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void set(int l,int b)
    {
        length=l;
        breadth=b; 
        cout<<"This is public section"<<endl;
        cout<<l<<"  "<<b<<endl; 
        cout<<length<<"   "<<breadth<<endl;
    }
    float area()
    {
        return length*breadth;
    }

};
int main()
{
    rectangle r1;
    int length,breadth;
    cout<<"Enter the length  and breadth of the rectangle"<<endl;
    cin>>length>>breadth;
    r1.set(length,breadth);
    cout<<r1.area()<<endl;


}