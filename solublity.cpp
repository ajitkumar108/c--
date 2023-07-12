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
       cout<<10*(y+(100-x)*z)<<endl;
    }
    
    return 0;
}