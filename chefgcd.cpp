#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
    int x,y,a,b,temp,hcf;
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
    if (a%x!=0)
    {
        cout<<a%x<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    }
    
    return 0;
}