#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    for (int i = 0; i < b; i++)
    {
       cin>>b;
       while (b!=0)
       {
           c=b%10;
           b/=10;
           if(c!=3&&c!=7)
           {
               cout<<"BETTER LUCK NEXT TIME"<<endl;
               break;
           }
           if (b==0)
           {
               cout<<"LUCKY"<<endl;
           }
           
       }
       
    }
    return 0;
}