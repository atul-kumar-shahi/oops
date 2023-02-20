#include<iostream>
using namespace std;
class interest
{
    private:
    float principle;
    float rate;
    float year;
    float interest;
    float total;
    public:
    void simple_interest(void);

};
void interest::simple_interest()
{
    cout<<"Enter the principal amount "<<endl;
    cin>>principle;
    cout<<"Enter the rate of the interest "<<endl;
    cin>>rate;
    cout<<"Enter the year "<<endl;
    cin>>year;
    interest=(principle*rate*year)/100;
    total=interest+principle;
    cout<<"principal amount "<<principle<<endl;
    cout<<"Rate of interest "<<rate<<endl;
    cout<<"Number of year  "<<year<<endl;
    cout<<"Total interest earned "<<interest<<endl;
    cout<<"Total amount after adding the interest "<<total<<endl;


}
int main()
{
    interest r1;
    r1.simple_interest();
    return 0;
}