#include<iostream>
using namespace std;
class car
{
    private:
    int model_year;
    int milage;
    float price;
    public:
    void show();

};
 inline void car::show()
  {
    model_year=2014;
    milage=20;
    price=34.5;
    cout<<"Model year of the car is "<<model_year<<endl;
    cout<<"milage of the car is "<<milage<<" km"<<endl;
    cout<<"price of the car is "<<price<<" lakh"<<endl;
  }
  int main()
  {
    car c1;
    c1.show();
    return 0;
  }