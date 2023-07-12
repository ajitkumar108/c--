#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        char a,b,c,d,e;
        cin>>a>>b>>c;
        cin>>d>>e;
        if (a==d||a==e)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<e<<endl;
        }
        
        
    }
    
    return 0;
}