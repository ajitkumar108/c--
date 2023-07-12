#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        long long int a;
        cin>>a;
        long long int arr[a],count=0;
        for (long long int i = 0; i < a; i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            count++;
        }
        for (long long int i = 0; i < a; i++)
        {
           if(arr[i]==1)
           {
               long long temp=0;
               while(i<a&&arr[i]==1)
               {
                   i++;
                   temp++;
               }
               count+=(temp*(temp-1))/2;
           }
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}