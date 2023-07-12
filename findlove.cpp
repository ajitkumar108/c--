#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       string s;
       cin>>s;
       int l=0,o=0,v=0,e=0;
       for (ll i = 0; i < s.size(); i++)
       {
          if (s[i]=='L')
          {
            l=1;
          }
          if (s[i]=='O')
          {
           o=1;
          }
          if (s[i]=='V')
          {
              v=1;
          }
          if (s[i]=='E')
          {
              e=1;
          }
          
       }
      if (l==1&&o==1&&v==1&&e==1)
      {
          cout<<"FOUND"<<endl;
      }
      else
      {
          cout<<"NOT FOUND"<<endl;
      }
      
       
    }
    return 0;
} 