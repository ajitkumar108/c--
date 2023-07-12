#include<bits/stdc++.h>
using namespace std;
void bubble(int *arr,int n)
{
    if(n==0||n==1)
    return ;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    bubble(arr,n-1);
}
int main()
{
    int arr[7]={1,4,2,8,6,3,0};
    int n=7;
    bubble(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    return 0;
}