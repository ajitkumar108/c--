#include<bits/stdc++.h>
using namespace std;
void findCombination(int i,int sum,int arr[],vector<int>&v,vector<vector<int>>&ans)
{
    if(i==5)
    {
        if(sum==0)
        {
            for(auto x:v)
            cout<<x<<" ";
            cout<<endl;
        }
        return ;
    }
    if(arr[i]<=sum)
    {
        v.push_back(arr[i]);
        findCombination(i,sum-arr[i],arr,v,ans);
        v.pop_back();
    }
    findCombination(i+1,sum,arr,v,ans);
}
int main()
{
    int arr[5]={1,2,4,5,7};
    int sum=10;
    vector<int>v;
    vector<vector<int>>ans;
    findCombination(0,sum,arr,v,ans);
   
    return 0;
}