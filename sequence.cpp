#include<bits/stdc++.h>
using namespace std;
void printSequence(int i,int arr[],vector<int>&v,int n)
{
    if(i==n)
    {
        for(auto x:v)
        cout<<x<<" ";
        if(v.size()==0)
        cout<<"null"<<endl;
        cout<<endl;
        return ;
    }
    v.push_back(arr[i]);
    printSequence(i+1,arr,v,n);
    v.pop_back();
    printSequence(i+1,arr,v,n);
}
int main()
{
    int arr[]={1,3,2,4};
    int n=4;
    vector<int>v;
    printSequence(0,arr,v,n);
    return 0;
}