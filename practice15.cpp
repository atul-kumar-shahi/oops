#include <iostream>
#include <cstring>
using namespace std;
#define N 10 
class digit
{
    
    int arr[N] = {0};

   public:
    void getter(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            switch (i)
            {
            case s[i] == "0":
                arr[0]++;
                break;
            case s[i] == "1":
                arr[1]++;
                break;
            case s[i] == "2":
                arr[2]++;
                break;
            case s[i] == "3":
                arr[3]++;
                break;
            case s[i] == "4":
                arr[4]++;
                break;
            case s[i] == "5":
                arr[5]++;
                break;
            case s[i] == "6":
                arr[6]++;
                break;
            case s[i] == "7":
                arr[7]++;
                break;
            case s[i] == "8":
                arr[8]++;
                break;
            case s[i] == "9":
                arr[9]++;
                break;
            default:
                cout << "Ankush chutiya hai" << endl;
            }
        }
    }
    void display()
    {
        for(int j=0;j<N;j++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    string s;
    cin>>s;
    digit d1;
    d1.getter(s);
    d1.display();
    return 0;
}
