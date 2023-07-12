#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        int a,b,m,n,count=0,temp=0;
        cin>>a;
        cin>>b;
        while (a)
        {
         m=a%10;
         a=a/10;
         if (m==1)
         {
            count++;
         }
            
        }
        while (b)
        {
            n=b%10;
            b=b/10;
            if (n==1)
            {
                temp++;
            }
            
        }
        if (count>temp)
        {
            cout<<temp<<endl;
        }
        else if (temp>count||temp==count)
        {
           cout<<count<<endl;
        }
        
    }
    
    return 0;
}