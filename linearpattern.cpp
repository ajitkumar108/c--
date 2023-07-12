#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for (int i = 1; i <=a; i++)
    {
        if (i%2==0)
        {
            cout<<2*i/2<<" ";
        }
        else
        {
            cout<<10*(i+1)/2<<" ";
        }
        
    }
    
    return 0;
}