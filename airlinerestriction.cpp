#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
   {
      int a,b,c,d,e;
   cin>>a>>b>>c>>d>>e;
   if((a+b<=e&&c<=d)||(a+b<=d&&c<=e)||(a+c<=e&&b<=d)||(a+c<=d&&b<=e)||(b+c<=e&&a<=d)||(b+c<=d&&a<=e))
   {
      cout<<"Yes"<<endl;
   }
   else
   {
      cout<<"No"<<endl;
   }
   }
}