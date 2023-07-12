#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c;
	cin>>t;
	while(t--){
        int x,y,z;
	    cin>>a>>b>>c;
	    int r[] = {a,b,c};
	    sort(r,r+3);
	    cout<<r[1]<<endl;
	}
	return 0;
}