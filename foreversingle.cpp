#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
     cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
        count++;
        }
        else
        {
            if (count==1)
            {
            cout<<arr[i]<<endl;
        }
        count = 1;
    }
}
    if (arr[n-2]!=arr[n-1])
    {
        cout<<arr[n-1];
    }
    
    return 0;
}