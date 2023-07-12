#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        int arr[a];
        int t=(a+1)/2;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        if(a%2!=0&&arr[t-1]==t)
        {
            int flag=1;
            for(int i=0;i<t-1;i++)
            {
                if(arr[0]==1&&arr[i+1]-arr[i]==1&&arr[i]==arr[a-1-i])
                {
                    int x=0;
                }
                else
                {
                    flag=0;
                }
            }
            if(flag==1)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}