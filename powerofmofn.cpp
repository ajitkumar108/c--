#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int power(int n,int m)
{
    if(n==0)
    {
        return 1;
    }
    else if (n%2==0)
    {
        return pow(m*m,n/2);
    }
    else
    
        return m*pow(m*m,(n-1)/2);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<power(n,m);
    
    return 0;
}