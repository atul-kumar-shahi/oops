#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int N,B;
    for(int i=0;i<t;i++)
     {
        cin>>N>>B;
        int w[N],h[N],p[N],area[N];
        for(int j=0;j<N;j++)
        {
            cin>>w[j]>>h[j]>>p[j];
            area[j]=w[j]*h[j];
        }
        for(int k=0;k<N;k++)
        {
            for(int l=k+1;l<N;l++)
            {
                if(p[k]<=B)
                {
                    if(area[k]>area[l])
                    cout<<area[l]<<endl;
                    else
                    cout<<area[k]<<endl;
                }
                else
                cout<<"no tablet"<<endl;
            }
        }
        
    }
	return 0;
}
