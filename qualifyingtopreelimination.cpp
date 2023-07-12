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
        int x=0,temp;
        int arr[a];
        for (int i = 0; i<a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a,greater<int>());
            
        for (int i = 0; i < a; i++)
        {
            if (arr[i]>=arr[b-1])
            {
                x++;
            }
            
        }
        cout<<x<<endl;
    }
    
    return 0;
}