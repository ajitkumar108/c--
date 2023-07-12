#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        int flag=1;
        for(int i=0;i<((N/2));i++)
        {
            if(A[0]==1&&A[N-1]==1&&A[N/2]==7&&(A[i+1]-A[i]==0||A[i+1]-A[i]==1)&&A[i]==A[N-1-i])
            {
                int x=NULL;
            }
            else{
                flag=0;
                break;
            }   
        }
        if(flag==1)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}