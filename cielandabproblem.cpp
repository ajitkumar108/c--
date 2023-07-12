#include <iostream>
using namespace std;

int main() 
{
    int n,a,b;
    cin>>a>>b;

    n=a-b;
    if((n%10)==0)
    cout<<(n+1)<<endl;
    
    else if(((n)%10)>1)
    
    cout<<(n-1)<<endl;
    
    else if(n==1)
    
    cout<<(n+1)<<endl;
    
	return 0;
}