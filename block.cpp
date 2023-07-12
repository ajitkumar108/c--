#include <iostream>
using namespace std;

int main() {
	int x; cin>>x;
	while(x--)
	{
	    int n, x, y=0, z; 
	    cin>>n;
	    x = n;
	    while(n != 0)
	    {
	        z = n % 10;
	        y = y * 10 + z;
	        n = n / 10;
	    }
	    
	    if(x == y)
	        cout<<"wins"<<endl;
	    else
	        cout<<"loses"<<endl;
	}
	return 0;
}
