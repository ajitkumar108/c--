#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c,d,e,f;
        cin>>a>>b>>c;
        cin>>d>>e>>f;
        if (a>d&&b>e||c>f&&a>d||b>e&&c>f||a>d&&c>f&&b>e)
        {
        cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
        
    }
    return 0;
}