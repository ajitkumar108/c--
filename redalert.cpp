#include<bits/stdc++.h>
using namespace std;
int RED_ALERT(int arr[], int n, int d, int h)
{
          int level=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
          level+=arr[i];
        else
        {
            if(level<d)
              level=0;
            else
              level-=d;
        }
        if(level>h)
           return 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,h;
        cin>>n>>d>>h;
        int arr[n];
        for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        }
        int k=RED_ALERT(arr,n,d,h);
        if(k==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}