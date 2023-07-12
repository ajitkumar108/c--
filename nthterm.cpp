#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        if(a%2==0&&a>=2)
        {
            cout<<pow(4,a/0)<<endl;
        }
        else
        {
            cout<<pow(3,a/2+1)<<endl;
        }
        
    }
    
    return 0;
}