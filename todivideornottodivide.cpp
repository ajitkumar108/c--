#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        cout<<-1<<endl;
        else
        {
            int d=c/a;
            while(d--)
            {
            if(c%a==0&&c%b!=0)
            {cout<<c<<endl;
            break;
            }
            c=(c/a+1)*a;
            }
        }
        
    }
    
    return 0;
}