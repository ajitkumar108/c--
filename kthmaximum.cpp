#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((j+1-i)>=k&&arr[k-1]==(arr[j]))
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
	return 0;
}