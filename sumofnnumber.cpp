#include<bits/stdc++.h>
using namespace std;
int firstSum(int n)
{
    if(n==0)
    return 0;
    else
    return n+firstSum(n-1);
    
}
int main()
{
    int n;
    cin>>n;
    cout<<firstSum(n)<<endl;
    return 0;
}
