#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   while (n--)
   {
       int a,b,c,d,e,f,g;
       cin>>a>>b>>c>>d>>e>>f>>g;
       if (a+b+c+d+e+f+g>3)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       
   }
   
   return 0;
}