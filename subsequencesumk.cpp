#include<bits/stdc++.h>
using namespace std;
void subsetSum(int i,vector<int>&v,int sum,int s,int arr[],int n)
{
    if(i==n)
    {
        if(s==sum)
        {
            for(auto x:v)
            cout<<x<<" ";
            cout<<endl;
        }
        return ;
    }
    v.push_back(arr[i]);
    s+=arr[i];
    subsetSum(i+1,v,sum,s,arr,n);
    s-=arr[i];
    v.pop_back();
    subsetSum(i+1,v,sum,s,arr,n);

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5,sum=5;
    vector<int>v;
    subsetSum(0,v,sum,0,arr,n);
    return 0;
}