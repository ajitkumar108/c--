#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       int a;
       cin>>a;
       int arr[a];
       for (int i = 0; i < a; i++)
       {
         cin>>arr[i];
       }
       sort(arr,arr+a);
       int sum=0,x;
       for (int i = 0; i <a-1; i++)
       {
           int x=arr[i+1]-arr[i];
           sum+=abs(x);
       }
       cout<<sum<<endl;
    }
    
    return 0;
}