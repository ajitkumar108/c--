#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if ((c*e)<=a&&(d*e)<=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}