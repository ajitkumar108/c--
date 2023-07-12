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
        int even=0,odd=0;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==1)
            odd++;
            else
            {
                even++;
            }
            
        }
         if (odd % 2 == 1) cout << even << "\n";
        else cout << min(even, odd / 2) << "\n";

        
        
    }
    
    return 0;
}