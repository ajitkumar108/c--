#include <iostream>
using namespace std;
int main()
{
long aeven=0,aodd=0;
long n,x;
cin>>n;
for(int i=0; i<n; i++)
{
cin>>x;
if(x%2==0)
{
aeven++;
}
else
{
aodd++;
}}
long odd=n/2;
long even=n/2;
if(n%2==1)
{
odd++;
cout<< min (odd, aeven) +min(even, aodd)<<"\n";
}
}