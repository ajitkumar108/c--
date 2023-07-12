#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
    return fact(n-1)*n;    
}
int main()
{
    int a,t;
    cin>>t;
    a=fact(t);
    cout<<a<<endl;
    return 0;
}