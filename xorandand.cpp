#include<bits/stdc++.h>
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
      int count=0;
      for (int i = 0; i < a; i++)
      {
        cin>>arr[i];
      }
      for (int i = 0; i < a; i++)
      {
        for (int j = i+1; j<a; j++)
        {
          
        if ((arr[i]^arr[j])<(arr[i]&arr[j]))
        {
            count++;
        }
        else
        {
            continue;
        }
        }
        
      }
      cout<<count<<endl;
    }
    
    return 0;
}