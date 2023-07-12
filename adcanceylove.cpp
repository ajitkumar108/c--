#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        vector<int>even;
        vector<int>odd;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin>>x;
            if (x%2==0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
            
        }
        if (odd.size()==a&&a%2!=0)
        {
            cout<<-1<<endl;
        }
        else if (odd.size()==1&&even.size()==0)
        {
            cout<<odd[0]<<endl;
        }
        else if (odd.size()==1&&even.size()>0)
        {
            cout<<-1<<endl;
        }
        else if (odd.size()>=2)
        {
            if (odd.size()%2!=0)
            {
                cout<<odd[0]<<" ";
                for (int i = 0; i < even.size(); i++)
                {
                    cout<<even[i]<<" ";
                }
                for (int i = 0; i < odd.size(); i++)
                {
                    cout<<odd[i]<<" ";
                }
                cout<<endl;
            }
            else
            {
                for (int i = 0; i < even.size(); i++)
                {
                    cout<<even[i]<<" ";
                }
                for (int i = 0; i < odd.size(); i++)
                {
                    cout<<odd[i]<<" ";
                }
                cout<<endl;
            }
            
        }
        else
        {
            cout<<-1<<endl;
        } 
    }
    return 0;
}