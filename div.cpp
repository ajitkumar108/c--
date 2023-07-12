#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while (x--)
    {
       int y,z;
       cin>>y>>z;
       if(y>z)
       {
           cout<<y%z<<endl;
       }
       else{
           cout<<y<<endl;
       }
    }
    
    return 0;
}