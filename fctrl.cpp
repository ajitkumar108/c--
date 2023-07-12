#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       int a,count=0;
       cin>>a;
       while (a>=5)
       {
           count+=a/5;
           a/=5;
       }
       cout<<count<<endl;
    }
    
    return 0;
}