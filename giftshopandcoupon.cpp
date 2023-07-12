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
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        long long sum=0,count=0;
        sort(arr,arr+a);
        for (int i = 0; i < a; i++)
        {
            int cost=(arr[i]+1)/2;
            if (sum+cost<=b)
            {
                count++;
                sum=sum+arr[i];
            }
            else
            {
                break;
            }
            
        }
        cout<<sum<<endl;
    }
    
    return 0;
}