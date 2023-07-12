#include<bits/stdc++.h>
using namespace std;
int main()
{
    int price;
    cin>>price;
    int n;
    cin>>n;
    int arr[n];
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==price)
            {
               flag=0;
               break;
            }
            
        }
     if(flag==0)
            {
                cout<<"true";
                return 0 ;
            }
    }
    cout<<"false";
    
    
    return 0;
}