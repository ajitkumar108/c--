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
        int count=0,temp=0;
        for (int i = 0; i<a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a,greater<int>());
        for (int i =0; i < a; i++)
        {
           if(temp>=b)
           {
               break;
           }
           temp=temp+arr[i];
          count++;
        }
        cout<<a-count<<endl;
    }
    
    return 0;
}