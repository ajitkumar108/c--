#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        double a;
        cin>>a;
        if (a<1500.0)
        {
            cout<<fixed<<setprecision(2)<<a+a*0.10+a*0.90<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(2)<<a+a*0.98+500<<endl;
        }
        
    }
    
    return 0;
}