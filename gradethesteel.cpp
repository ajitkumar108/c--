#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,c;
        float b;
        cin>>a>>b>>c;
        if (a>50&&b<0.7&&c>5600)
        {
            cout<<10<<endl;
        }
        else if (a>50&&b<0.7&&c<5600)
        {
            cout<<9<<endl;
        }
        else if (a<50&&b<0.7&&c>5600)
        {
            cout<<8<<endl;
        }
        else if (a>50&&b>0.7&&c>5600)
        {
            cout<<7<<endl;
        }
         else if(a>50 || b<0.7 || c>5600)
        {
            cout<<6<<"\n";
        }
        else
        {
            cout<<5<<endl;
        }
    }
    
    return 0;
}