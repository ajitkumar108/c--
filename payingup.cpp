#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        bool flag=false;
        int n,m;
        cin>>n>>m;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        for (int j = 0; j < (1<<n); ++j) {
            int sum=0;
            for (int i = 0; i < n; ++i) {
                if(j& (1<<i))
                    sum+=arr[i];

            }
            if(sum==m) {
                cout << "Yes\n";
                flag= true;
                break;
            }
        }
        if(!flag)
            cout<<"No\n";
    }
    return 0;
}
