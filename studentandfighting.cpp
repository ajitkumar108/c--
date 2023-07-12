#include <bits/stdc++.h>
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
        sort(arr,arr+n);
        int x=arr[n-1];
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==x)
            {
                cout<<"fight:("<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"peace:)"<<endl;
        }
    }
    
    return 0;
}