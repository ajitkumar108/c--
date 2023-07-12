#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
while (n--)
{
   int a,b;
   cin>>a>>b;
   if ((a+b)<3)
   {
       cout<<"1"<<endl;
   }
   else if (2<(a+b)&&(a+b)<11)
   {
       cout<<"2"<<endl;
   }
   else if (10<(a+b)&&(a+b)<61)
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