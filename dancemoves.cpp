#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<0<<endl;
        }
        else if(x < y){
            int diff = y-x;
            if(diff % 2 == 0){
                cout<<diff/2<<endl;
            }else
            {
                cout<<(diff/2)+ 2<<endl;
            }
        }
        else
        {
            int diff = x-y;
            cout<<diff<<endl;
        }
    }
    return 0;
}