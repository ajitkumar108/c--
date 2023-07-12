#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if (a+b>=11)
        {
            cout<<21-(a+b)<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
    }
    return 0;
}