#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        int arr[a],count=1;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a);
        if (a==1)
        {
            cout<<0<<endl;
        }
        else if (a==2)
        {
            if (arr[1]==arr[0])
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }

        else
        {
            for (int i = 0; i < a-1; i++)
            {
                if (arr[i]==arr[i+1])
                {
                    count++;
                }
                
            }
            
        }
        
        
        
    }
    return 0;
}