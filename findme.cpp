#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
      int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            count++;
        }
    }
    if(count>=1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}