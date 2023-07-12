#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
      int m,x,sum=0;
    cin>>x;
  while (x>0)
      {
          m=x%10;
          sum=sum+m;
          x=x/10;
      }
        cout<<sum<<endl;
  }
  
    return 0;
}
