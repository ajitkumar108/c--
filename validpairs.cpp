#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if (x==y||y==z||x==z||x==y==z)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }   
    return 0;
}