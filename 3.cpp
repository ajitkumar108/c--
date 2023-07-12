#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while (a--)
    {
        int arr[5];
        for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
        }
        sort(arr+5,arr);
        cout<<arr[0]<<endl;
    }
    
    return 0;
}