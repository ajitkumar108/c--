#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    long chance=1;
    while(1)
    {
        if(chance%2!=0)
        {
            a=a-chance;
        }
        else
        {
            b=b-chance;
        }
        chance++;
        if(a<0)
        {
            cout<<"Bob"<<endl;
            break;
        }
        if(b<0)
        {
            cout<<"Limak"<<endl;
            break;
        }
    }
}
return 0;
}