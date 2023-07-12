#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,x,y;
        cin>>m>>x>>y;
        int arr[m];
        int u[m];
        int l[m];
        int arr1[101]={0};
        int p=x*y;
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        for(int  i=0;i<m;i++)
        {
            if(arr[i]<=p)
            {
                l[i]=1;
                u[i]=arr[i]+p;
            }
            else
            {
                l[i]=arr[i]-p;
                u[i]=arr[i]+p;
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=l[i];j<=u[i];j++)
            {
                if(arr1[j]==0)
                {
                    arr1[j]++;
                }
            }
        }
        int count=0;
        for(int i=1;i<=100;i++)
        {
            if(arr1[i]==0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
   return 0;
}