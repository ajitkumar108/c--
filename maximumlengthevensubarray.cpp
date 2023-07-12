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
        int sum=0;
        for (int i = 1; i <= a; i++)
        {
            sum=sum+i;
        }
        if (sum%2==0)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a-1<<endl;
        }
                
    }
    
    return 0;
}