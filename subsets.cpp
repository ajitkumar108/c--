#include<bits/stdc++.h>
using namespace std;
void subset(int i,vector<int>&v,vector<vector<int>>&ans,int arr[],int n)
{
    ans.push_back(v);
    for(int j=i;j<n;j++)
    {
        v.push_back(arr[i]);
        subset(j+1,v,ans,arr,n);
        v.pop_back();
    }
}
int main()
{
    int arr[]={1,4,6,2};
    vector<int>v;
    vector<vector<int>>ans;
    subset(0,v,ans,arr,4);
    for(int i=0;i<ans.size();i++)
    {
        for(auto x:ans[i])
        cout<<x<<"  ";
        cout<<endl;
    }
    return 0;
}