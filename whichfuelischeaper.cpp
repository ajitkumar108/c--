#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        int p,q;
        p=x+a*k;
        q=y+b*k;
        if (p>q)
        {
            cout<<"DIESEL"<<endl;
        }
        else if (q>p)
        {
            cout<<"PETROL"<<endl;
        }
        else{
            cout<<"SAME PRICE"<<endl;
        }
    }
    
    return 0;
}