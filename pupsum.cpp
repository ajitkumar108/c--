#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
     int x,y,z;
     cin>>x>>y;
    while (x--)
    {
        z=0;
        for (int i=y;i>=1;i--)
        {
            z=z+i;
        }
        y=z;
    }
    cout<<z<<endl;
    }
    return 0;
}