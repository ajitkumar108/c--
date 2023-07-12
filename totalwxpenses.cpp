#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
      long long x,y;
        cin>>x>>y;
        double z=x*y;
    if (x>1000)
    {
       cout<<z-0.1*(z)<<endl;
    }
    else
    {
        cout<<(1.0)*z<<endl;
    }
    
    
    }
    
}