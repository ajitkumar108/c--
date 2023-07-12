#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    while (n--)
    {
        int arr[a];
        int count=0;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
            count++;
        }
        sort(arr,arr+a);
        if (count>=a)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
        
    }
    
    return 0;
}