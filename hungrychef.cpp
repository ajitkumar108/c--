#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=1;
        if(b*c<=d)
        cout<<0<<" "<<c<<endl;
        if(a*c>d)
        cout<<-1<<endl;
        else
        {
           int g=b*c;
           int f=a-b;
           int m=(d-g)/f;
           if((d-g)%f!=0)
           m++;
           cout<<m<<" "<<c-m<<endl;
        }
    }
    return 0;
}