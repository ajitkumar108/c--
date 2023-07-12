#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a;
    cin>>a;
    while(a--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int temp=0;
        for(int i=0;i<n-1;i++)
        {
                if(s[i]=='1'&&s[i+1]=='1')
                {
                    cout<<2<<endl;
                    temp=1;
                    break;
                }
            
        }
        if(temp==0)
        {
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                    count++;
            }
            if(count==n)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
    }
    return 0;
}