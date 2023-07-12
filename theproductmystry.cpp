#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{	if (a == 0)
	return b;
	if (b == 0)
	return a;
	if (a == b)
		return a;
	if (a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}
int main()
{
	int n;
    cin>>n;
    while (n--)
    {
     int b,c;
     cin>>b>>c;
     if (c==b)
     {
        cout<<1<<endl;
     }
     else if (c<b)
     {
        if (b%c==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<c<<endl;
        }  
     }  
     else
     {
     int p=gcd(b,c);
     int k=max(b/p,c/p);
     cout<<k<<endl;
     }
    }
  return 0;  
}
