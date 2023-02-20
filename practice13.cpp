#include<iostream>
using namespace std;
class life
{
    int mfyear;
    int exyear;
    int year;
    public:
    void getyears()
    {
        cout<<"Enter the manufacture year of the product"<<endl;
        cin>>mfyear;
        cout<<"Enter the expiry year of the product "<<endl;
        cin>>exyear;
    
    }
    void period(life y1)
    {
       year=y1.exyear-y1.mfyear;
        cout<<"life of the product is "<<year<<endl;
    }
};
int main()
{
    life A;
    A.getyears();
    A.period(A);
    return 0;
}