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
    cout<< (2*(180+x)-y-z)<<endl;
    }
    return 0;
}