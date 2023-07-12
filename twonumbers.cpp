#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0)
        {
            cout<<max(a,b)/min(a,b);
        }
        else
        {
            a*=2;
            cout<<max(a,b)/min(a,b);
        }
        cout<<"\n";
    }
    
    return 0;
}