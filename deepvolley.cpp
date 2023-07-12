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
        int arr[b];
        int count=0;
        int temp=0;
        for (int i = 0; i < b; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+b);
        for (int i = 0; i < b; i++)
        {
            if (arr[i]%2!=0&&arr[i]<=b)
            {
                count++;
            }
            else if (arr[i]%2==0&&arr[i]<=b)
            {
                temp++;
            }
            
        }
        if (count>temp)
        {
            cout<<"DS"<<endl;
        }
        else if (temp>count)
        {
            cout<<"AR"<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }
        
    }
    
    return 0;
}