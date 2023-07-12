#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a+b+c<=d)
        {
            cout<<1<<endl;
        }
        else if (a+b<=d)
        {
            cout<<2<<endl;
        }
        else if (b+a<=d)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
        
    }
    
    return 0;
}