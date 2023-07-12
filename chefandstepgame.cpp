#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        for(int i=0;i<100;i++)
        {
            if(n%2==0)
            {
                n=n/2;
                count++;
            }
            else
            {
                n=n-1;
                count++;
            }
            if(n==0)
            {
                cout<<count<<endl;
                break;
            }
            if(n<0)
            {
                cout<<"-1"<<endl;
                break;
            }
        }
    }
    
    
    return 0;
}