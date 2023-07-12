#include<bits/stdc++.h>
using namespace std;
void fun(int i,int sum,vector<int>&v,int arr[],int n)
{
if(i==n)
{
    v.push_back(sum);
    return ;
}
fun(i+1,sum,v,arr,n);
fun(i+1,sum+arr[i],v,arr,n);
}
int main()
{
    vector<int>v;
    int arr[]={1,2,3};
    fun(0,0,v,arr,3);
    sort(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<"\t";
    return 0;
}