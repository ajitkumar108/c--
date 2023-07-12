#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
    int x,y,z;
    cin>>x>>y>>z;
    if ((x+y+z)==180)
    {
    cout<<"YES"<<endl;
    }
    else
    {
    cout<<"NO"<<endl;
    }
    }
    return 0;
}