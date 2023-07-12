#include<bits/stdc++.h>
using namespace std;
void fun(int i,int k,vector<int>&arr)
{
    if(arr.size()==1)
    return ;
    i=(i+k-1)%arr.size();
    arr.erase(arr.begin()+i);
    fun(i,k,arr);
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    arr[i]=i+1;
    fun(0,k,arr);
    cout<<arr[0]<<endl;
    return 0;
}