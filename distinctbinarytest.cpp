#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int t;
        cin>>t;
        string s;
        cin>>s;

        
        int count=0;
        for (int i = 0; i < t; i++)
        {
            if (s[i]==s[i+1])
            {
                count++;
            }
            
        }
            cout<<t-count<<endl;
        
    }
    
    return 0;
}