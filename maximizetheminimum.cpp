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
         sort(arr,arr+a,greater<int>());
     if(b==0)
    {
        cout<<arr[a-1]<<endl;
    }
      else  if (a>b)
        {
        cout<<arr[a-b-1]<<endl;
    }
    else
    {
        cout<<arr[0]<<endl;
    }
    
        }
    

    return 0;
}