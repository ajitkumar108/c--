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
        if (c/a>d/b)
        {
            cout<<1<<endl;
        }
        else if (c/a<d/b)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
    
    return 0;
}