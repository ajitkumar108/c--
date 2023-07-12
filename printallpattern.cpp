#include<bits/stdc++.h>
using namespace std;
void fun(int i,int sum,vector<int>&v,int arr[],int n)
{
   if(i==12)
   {
    if(sum==n)
    {
        for(auto x:v)
        cout<<x<<" ";
        cout<<endl;
    }
    return ;
   }
   v.push_back(arr[i]);
   sum+=arr[i];
   fun(i+1,sum,v,arr,n);
   v.pop_back();
   sum-=arr[i];
   fun(i+1,sum,v,arr,n);
}
int main()
{
    vector<int>v;
    int sum=12;
    int arr[]={ 7, 3, 5, 12, 2, 1, 5, 3, 8, 4, 6, 4};
    fun(0,0,v,arr,sum);
    return 0;
}