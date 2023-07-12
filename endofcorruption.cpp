#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int a[n+m];
	for(int i=0;i<(n+m);i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<(n+m);i++)
	{
	    int j=0,max=0,pos=0;
	    if(a[i]==(-1))
	    {
	     while(j<=i)
	     {
	     if(a[j]>max)
	     {
	     max=a[j];
	     pos=j;
	     }
	     j++;
	     }
	     cout<<max<<endl;
	     a[i]=0;
	     a[pos]=0;
	    }
	}
	return 0;
}
