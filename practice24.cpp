// local class and the global class
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void getvalue()
    {
        cout << "Enter the value of the variable " << endl;
        cin >> a;
    }
    void show()
    {
        cout << "The value of a is " << a<<endl;
    }
};
int main()
{
    class B
    {
        int b;
        public :
        void getvalue()
        {
            cout << "Enter the value of the  variable " << endl;
            cin >> b;
        }
        void show()
        {
            cout << "The value of b is " << b << endl;
        }
    };

    A r;
    B s;
    r.getvalue();
    s.getvalue();
    r.show();
    s.show();
    return 0;
}