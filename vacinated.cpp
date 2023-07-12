#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    int p=min(arr[0],arr[1]);
    int q=min(p,arr[2]);
    for(int i=0;i<3;i++)
    {
        if(arr[i]==q)
        {
            if(i==0)
            {
                cout<<"A"<<endl;
            }
            else if(i==1)
            {
                cout<<"B"<<endl;
            }
            else
            {
                cout<<"C"<<endl;
            }
        }
    }
return 0;
}