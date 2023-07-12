#include<iostream>
using namespace std;
int main()
{
    int n;
	cin>>n;
	while (n--)
	{
		int a,b,c,d,e,f;
		cin>>a>>b;
		cin>>c>>d;
		cin>>e>>f;
		if(a==c&&b!=d)
		{
			if (c==e&&d!=f)
			{
				cout<<"YES"<<endl;
			}
			else if (c!=e&&d==f)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
			
		}
		else if (a!=c&&b==d)
		{
			if (c==e&&d!=f)
			{
				cout<<"YES"<<endl;
			}
			else if (c!=e&&d==f)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else if (a!=c&&b!=d)
		{
			if (c==e&&d!=f)
			{
				cout<<"YES"<<endl;
			}
		}	
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
		
	return 0;
}