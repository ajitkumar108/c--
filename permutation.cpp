#include<bits/stdc++.h>
using namespace std;
void fun(int i,vector<int>&v,vector<vector<int>>&ans)
{
 if(v.size()==4)
 {
    ans.push_back(v);
    return ;
 }
 for(int j=i;j<v.size();j++)
{
    swap(v[i],v[j]);
    fun(i+1,v,ans);
    swap(v[i],v[j]);
}
}
int main()
{
    vector<int>v;
    vector<vector<int>>ans;
    for(int i=0;i<4;i++)
    v.push_back(i);
    fun(0,v,ans);
    for(int i=0;i<ans.size();i++)
    {
        for (auto x:ans[i])
        cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}