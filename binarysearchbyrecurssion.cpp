#include<bits/stdc++.h>
using namespace std;
bool search(int *arr,int e,int n,int key)
{
    if(e>n)
    return false;
    int mid=e+(n-e)/2;
    if(arr[mid]==key)
    return true;
    cout<<arr[mid]<<" ";
    if(arr[mid]>key)
    search(arr,mid+1,n,key);
    if(arr[mid]<key)
    search(arr,e,mid-1,key);
    
}
int main()
{
    int arr[7]={1,4,5,7,9,10,44};
    int n=7,key=444;
    bool ans=search(arr,0,n,key);
    if(ans)
    cout<<"element found"<<endl;
    else
    cout<<"element not found"<<endl;

    return 0;
}