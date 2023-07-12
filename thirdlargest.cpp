#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    while (n--)
    {
        int x;
        cin>>x;
        for (i = 0; i < x; i++)
        {
            cin>>i;
        }
        if (x%3==0)
        {
           sort(i,i+x);
           cout<<3<<endl; 
        }
        
    }
    
}