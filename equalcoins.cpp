#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while (n--)
    {
        long long int a,b;
        cin>>a>>b;
        if(a%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if (a==0&&b%2!=0)
        {
            cout<<"NO"<<endl;
        }
        
        else 
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}