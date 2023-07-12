#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       int a,b,c;
       cin>>a>>b>>c;
       int arr[a];
       int count=0;
       for (int i = 0; i < a; i++)
       {
           cin>>arr[i];
       }
       int t=arr[a-1];
       int d=t+(b)*(c-1);
       sort(arr,arr+a);
       if (arr[a-1]<d||arr[a-1]<=t)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       
    }
    
    return 0;
}