#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
    int a,b,c;
    cin>>a>>b>>c;
   int x=min(a,b);
x=min(x,c);
    if (x==a)
    {
        cout<<"Draw"<<endl;
    }
    else if (x==b)
    {
        cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Alice"<<endl;
    }
    
    }
    
    return 0;
}