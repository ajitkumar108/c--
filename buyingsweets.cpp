#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       int a,b;
       cin>>a>>b;
       int arr[a];
       int sum=0;
       for (int i = 0; i < a; i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+a);
       for (int i = 0; i < a; i++)
       {
           sum=sum+arr[i];
       }
       if (sum/b>0 && (sum-arr[0])/b!=(sum/b))
       {
           cout<<sum/b<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
       
    }
    
    return 0;
}