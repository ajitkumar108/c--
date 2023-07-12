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
        int z=0,o=0;
        int count=0;
        char c[a];
        for(int i=0;i<a;i++)
        {
            cin>>c[i];
              if (c[i]=='0')
              {
                  z=i;
              }
              else
              {
                  o=i;
              }
              if(i>0&&abs(c[i]-c[i-1])==1)
                {
                    count++;
                }
        }
        if (b>count)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if (c[0]=='0')
            {
                if(b%2==0)
                {cout<<z+1<<endl;}
            
            else
            {
                cout<<o+1<<endl;
            }
            }
            else
            {
                if(b%2==0)
                {
                    cout<<o+1<<endl;
                }
                else
                {
                    cout<<z+1<<endl;
                }
                
            }
            
        }
        
    }
    
    return 0;
}