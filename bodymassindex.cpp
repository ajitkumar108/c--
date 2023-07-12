#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x,y,z;
        cin>>x>>y;
       z=x/(y*y);
       if (z<=18)
       {
           cout<<"1"<<endl;
       }
       else if (z>18&&z<25)
       {
           cout<<"2"<<endl;
       }
       else if (z>24&&z<30)
       {
           cout<<"3"<<endl;
       }
       else
       {
           cout<<"4"<<endl;
       }
    }
    
    return 0;
}