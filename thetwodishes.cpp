#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        if (a>=b)
        {
            cout<<b<<endl;
        }
        else
        {
            int x=b-a;
            cout<<a-x<<endl;
        }
        
    }
    
    return 0;
}