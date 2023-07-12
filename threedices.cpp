#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        double z=(6-x-y);
        z=max(z,0.0);
        double a = z/6;
        cout<<a<<endl;
    }
    return 0;
}