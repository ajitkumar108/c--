#include <iostream>
using namespace std;

int main() {
int t,D,d,A,B,C;
cin>>t;
while (t-->0)
{cin>>D>>d>>A>>B>>C;
{if (D*d<10)
cout<<0<<endl;
else if (D*d>=10&&D*d<21)
cout<<A<<endl;
else if (D*d>=21&&D*d<42)
cout<<B<<endl;
else if(D*d>=42)
cout<<C<<endl;}}

	return 0;
}
