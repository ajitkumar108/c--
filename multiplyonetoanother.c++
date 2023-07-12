#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a1[n],b1[n];
        for(int i=0;i<n;i++)
        {
            cin>>a1[i]>>b1[i];
        }
        reverse(b1,b1+n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+(a1[i]*b1[i]);
        }
        cout<<sum<<endl;
    }
    
    
    return 0;
}