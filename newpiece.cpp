#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if ((a==c&&b!=d)||(a!=c&&b==d))
        {
            cout<<1<<endl;
        }
        else if (a!=c&&b!=d)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
    
    return 0;
}