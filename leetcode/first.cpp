#include <iostream>
#include <sstream>
#include<cstring>
using namespace std;

class Student
{
    
    int age;
    string first_name;
    string last_name;
    int standard;
    public:
    void set_age(int j)
    {
        age=j;
    }
    void set_standard(int i)
    {
        standard=i;
        
    }
    void set_first_name(string s1)
    {
        first_name=s1;
    }
    void set_last_name(string s2)
    {
        last_name=s2;
    }
     void get_age()
    {
        cout<< age<<endl;
    }
   void  get_standard()
    {
      cout<< standard<<endl;
        
    }
    void get_first_name()
    {
       cout<< first_name<<endl;
    }
    void get_last_name()
    {
      cout<< last_name<<",";
    }
    void to_string()
    {
        cout<<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
    }
    
};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    st.get_age();
    st.get_last_name() ;
    st.get_first_name();
     st.get_standard();
    
    st.to_string();
    
    return 0;
}