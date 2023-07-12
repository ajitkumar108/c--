#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    int winner,max=0,lead;
while(n--)
  { cin>>a>>b; 
   if (a>b)
   {
       lead=a-b;
       if (lead>max)
       {
       max=lead;
       winner=1;
       }  
   }
   else
   {
    lead=b-a;
    if (lead>max)
       {
       max=lead;
       winner=2;
       }   
   }  
} 
cout<<winner<<" "<<max<<endl;
    return 0;
}