#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       int a,b,c,d,e,f,g,h,i,j;
       cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
       if (a+c+e+g+i>b+d+f+h+j)
       {
           cout<<"1"<<endl;
       }
       else if (a+c+e+g+i<b+d+f+h+j)
       {
           cout<<"2"<<endl;
       }
       else
       {
           cout<<"0"<<endl;
       }
       
    }
    
    return 0;
}