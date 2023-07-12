#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        vector<int> v;
        int a,b,c=0;
        cin>>a>>b;
        int x;
        if(a>=10)
        {
        while (a)
        {
            x=a%10;
            v.push_back(x);
            a=a/10;
        }
    sort(v.begin(),v.end());
    for (int i = 0; i < b; i++)
    {
        if(v[i]!=9)
        {
            v[i]+=1;
        }
        else
        {
           v[i]=v[i+1];
        }
    }
    int p=1;
    for(int i=0;i<v.size();i++)
    {
        p=p*v[i];
    }
    cout<<p<<endl;
    }
    else
    {
       cout<<a+b<<endl;
    }
    }
    return 0;
}