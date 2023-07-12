#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int q=arr[0];
        int k=0;
        for(int i=0;i<n;i++)
        {
            int p;
            p=max(q,arr[i]);
            if(p>q)
            {
                q=p;
                k=i;
            }
        }
        cout<<q<<"\n"<<k+1<<endl;
    }
    
    return 0;
}