#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    for(int i=2; i<=sqrt(n) ; i++)
    {
        if( n %i==0)
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,i=1;
        cin>>x>>y;
        int sum=x+y;
        while(!prime(sum+i))
        {
            i++;
        }
        cout<<i<<endl;
   }
}