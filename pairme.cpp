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
        if (x+y==z||x+z==y||y+z==x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    
    return 0;
}