#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int count=0;
        int a;
        cin>>a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                break;
            }
        }
        for (int i = 0; i <a; i++)
        {
            if(arr[i]>arr[i+1])
            {
               count++;
            }
        }
        
        if (count>1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
 return 0;   
}