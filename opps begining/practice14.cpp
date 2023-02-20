#include<iostream>
using namespace std;
class life
{
    int mfyear;
    int exyear;
    int year;
    public:
    void getyear()
    {
        cout<<"Enter the manufacture year of the product "<<endl;
        cin>>mfyear;
        cout<<"Enter the expiry year of the product "<<endl;
        cin>>exyear;
    }
     void period(life *y1)
     {
        // cout<<"Address of y1"<<&y1<<endl;
        year=y1->exyear-y1->mfyear;
        cout<<"life period of the product is "<<year<<endl;
     }
};
int main()
{
    life al;
    // cout<<"Address of al "<<&al<<endl;
    al.getyear();
    al.period(&al);
    return 0;
}