#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        if (a%2==0)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a+2<<endl;
        }
        
    }
    
    return 0;
}