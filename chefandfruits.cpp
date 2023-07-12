#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       int a,b,c;
       cin>>a>>b>>c;
       int d=abs(a-b);
       if (c>=d)
       {
        cout<<0<<endl;
       }
       else
       {
           cout<<d-c<<endl;
       }
    }
 return 0;   
}