#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
   if (x%5==0)
   {
       if (y>x)
       {
           cout<<y-x<<endl;
       }
       else
       {
           cout<<y<<endl;
       }
   }
   else
   {
       cout<<y<<endl;
   }   
    return 0;
}