#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);
        int sum=arr[1]+arr[2];
        cout<<sum<<endl;
        
    }
    
    return 0;
}