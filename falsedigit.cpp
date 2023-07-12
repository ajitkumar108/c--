#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    if (s[0]-'0'>1)
    {
        s.insert(s.begin(),'1');
    }
    else
    {
        s.insert(s.begin()+1,'0');
    }
    cout<<s<<endl;
}
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        solve();
    }
    
    return 0;
}