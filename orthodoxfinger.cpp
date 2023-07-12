#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    int mid=(n+1)/2;
    int k,count=0;
    for (int i = 0; i <(n+1)/2; i++)
    {
        k=arr[mid]-arr[i];
        count+=k;
    }
    int sum=0,p;
    for (int i = n; i < (n+1)/2; i--)
    {
       p=arr[i]-arr[mid];
       sum+=p; 
    }
    
    cout<<(count+sum)<<endl;
    
    return 0;
}