#include <iostream>
using namespace std;

long long t,n,ans;

int main() {
	cin>>t;
	while(t--){
	    cin>>n;
	    ans = 0;
	    ans += n/100;
	    n %= 100;
	    ans += n/50;
	    n %= 50;
	    ans += n/10;
	    n %= 10;
	    ans += n/5;
	    n %= 5;
	    ans += n/2;
	    n %= 2;
	    ans += n;
	    cout<<ans<<'\n';
	}
	return 0;
}