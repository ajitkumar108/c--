#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a);
        cout<<arr[0]+arr[1]<<endl;
    }
    
    return 0;
}