#include <iostream>
#define ll long long int
using namespace std;
int main() {
    ll T;
    cin>>T;
    while(T--)
    {
        int X,Y,K,N;
        cin>>X>>Y>>K>>N;
        int n = X - Y;
        int count = 0;
        int p[N],c[N] ;
   for(int i=0;i<N;i++)
   {
       cin>>p[i]>>c[i] ;       
   }
    for(int i=0;i<N;i++)
    {
            if(p[i] >= n)
            {
                if(c[i] <= K)
                {   count = 1;
                    cout<<"LuckyChef"<<endl;
                    break;
                }
            }
    }
    if(count == 0)
            cout<<"UnluckyChef"<<endl;
    }
}