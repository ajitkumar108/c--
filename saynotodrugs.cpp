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
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
       int p=arr[a-1]+((c-1)*b);
        sort(arr+a,arr);
        int x=arr[a-1];
        if (p>x)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    
    return 0;
}