#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        float a,b,c,d;
        cin>>a>>b>>c>>d;
        if(100/(a*b*c*d)<9.58)
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