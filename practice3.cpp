#include<iostream>
using namespace std;
class item
{
    private:
    int codeno;
    float price;
    int qty;

    public:
    void show();

};
void item ::show()
{
     codeno=101;
     price=456.45;
     qty=786;
     cout<<"codeno is "<<codeno<<endl;
     cout<<"price is "<<price<<endl;
     cout<<"qty is  "<<qty<<endl;
}
int main()
{
    item A;
    A.show();
    return 0;
}