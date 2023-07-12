#include<bits/stdc++.h>
using namespace std;
int partition(int *arr,int l,int h)
{
    int pivot=arr[h],i=l-1;
    for(int j=l;j<h;j++)
    {
        if(arr[j]<pivot)
        i++,swap(arr[j],arr[i]);
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void quickSort(int *arr,int l,int h)
{
    if(l<h)
    {
        int p=partition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}
int main()
{
    int arr[7]={2,7,4,8,6,9,14};
    int n=7;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    return 0;
}