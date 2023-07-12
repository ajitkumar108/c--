#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if (a%10==0)
        {
            cout<<a/10<<endl;
        }
        else
        {
            cout<<a/10+1<<endl;
        }
        
    }
    return 0;
}