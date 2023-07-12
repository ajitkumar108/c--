#include <iostream>
using namespace std;
int main() {
int x,y,m,n;
cin>>x;
cin>>y;
m=2*(x+y);
n=x*y;
if(m>n)
{
  cout<<"Peri"<<endl;
  cout<<m<<endl;
}
else if(n>m)
{
   cout<<"Area"<<endl;
   cout<<n<<endl;
}
else
{
   cout<<"Equi";
}
	return 0;
}
