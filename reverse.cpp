#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
while (t--)
{
   int x,y=0,z;
   cin>>x;
   while (x!=0)
   {
   z=x%10;
   y=y*10+z;
   x/=10;
   }
   cout<<y<<endl;
}
    return 0;
}