#include<iostream>
#include<cmath>
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
           cout<<pow(3,(a-1)/2)<<endl;
        }
        else
        {
            cout<<pow(2,(a)/2)<<endl;
        }
        
    }
    return 0;
}