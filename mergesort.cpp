#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int l,int mid ,int n)
{
    int i=l,j=mid+1,k=0;
    int b[n-l+1];
    while(i<=mid&&j<=n)
    {
        if(arr[i]<arr[j])
        {
            b[k++]=arr[i++];
        }
        else
        b[k++]=arr[j++];
    }
    if(i>mid)
    {
        while (j<=n)
        {
            b[k++]=arr[j++];
        }     
    }
    else
    while(i<=mid)b[k++]=arr[i++];
    for(int t=0;t<n-l+1;t++)
    arr[t+l]=b[t];
}
void mergeSort(int *arr,int l,int n)
{
    if(l<n)
    {
        int mid=(n+l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,n);
        merge(arr,l,mid,n);
    }
}
int main()
{
    int arr[7]={4,6,7,9,1,0,5};
    int n=7;
    mergeSort(arr,0,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<'\t';
    return 0;
}