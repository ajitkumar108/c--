#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
    int x,y,a,b,temp,hcf,lcm;
    cin>>x>>y;
    a=x;
    b=y;
    while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=a;
    lcm=(x*y)/hcf;
    cout<<hcf<<" "<<lcm<<endl;
    
    }
    
    return 0;
}