#include<bits/stdc++.h>
using namespace std;
int main()
{

int a;
cin>>a;
int arr[a];
for (int i = 0; i < a; i++)
{
    cin>>arr[i];
}
int flag=1;
int count=1;
int p=0;
for (int i = 0; i < a-1; i++)
{
    for (int j = i+1; i < a; i++)
    {
    if (arr[j]>arr[i])
    {
        flag=1;
    }
    else
    {
        flag=0;
        break;
    }
    if (flag==1)
    {
        count++;
    }
    if (count>p)
    {
        p=count;
    }
    cout<<count<<endl;
    }
    
}

return 0;
}