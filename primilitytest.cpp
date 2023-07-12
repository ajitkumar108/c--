#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x,y=0;
        cin>>x;
for (int i = 1; i <= x; i++)
{
    if (x%i==0)
    {
       y++;
    }    
}
if (y==2)
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