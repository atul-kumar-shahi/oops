#include <iostream>
using namespace std;
class first
{
    public:
    class two 
 {
    public : 
    
        void display(){
                           cout << "This is the case of the nested class " << endl;
                    }
 }; 

};

int main()
{
    first::two a;
    a.display();
    return 0;
}