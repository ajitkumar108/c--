#include <iostream>
#include<algorithm>
using namespace std;
int main() {
int t,k;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>k;int a[k];int b[k-1];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }sort(a,a+k);
    for(int i=0;i<k-1;i++)
    {
        b[i]=a[i+1]-a[i];
    }sort(b,b+k-1);
    cout<<b[0]<<endl;
}
	return 0;
}
