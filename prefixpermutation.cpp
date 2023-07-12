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
        vector<int> v;
        for (int i = 0; i < b; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int temp=0;
        for (int i= 0; i < b; i++)
        {
            int p=v[i];
            for(int j=p;j>temp;j--)
            {
                cout<<j<<" ";
            }
            temp=v[i];
        }
        cout<<endl;
    }
    
    return 0;
}