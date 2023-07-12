#include<bits/stdc++.h>
#include<cmath>
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
        for (int i = 0; i <a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a);
       for (int i = 0; i < b; i++)
       {
        if(arr[i]<0)
            {
                arr[i]=-arr[i];
            }
       }
       sort(arr,arr+a);
       int sum=0;
       for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>0)
            {
                sum=sum+arr[i];
            }
            else
            {
                break;
            }
        }
        if(sum>0)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
       
    }
    
    return 0;
}