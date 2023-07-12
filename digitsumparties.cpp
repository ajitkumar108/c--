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
        if (a%2==0)
        {
            a=a+1;
        }
        
        while (a!=0)
        {
            sum=sum+a%10;
            a=a/10;
        }
      
    }
    
    return 0;
}