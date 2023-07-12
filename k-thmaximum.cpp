#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    long long  n,k;
	    cin >> n >> k;
	    long long arr[n];
	    long long maxi = -1, res=0;
	    for(long long i=0;i<n;i++)
	    {
	        cin >> arr[i];
	        maxi = max(maxi,arr[i]);
	    }
	    
	    for(long long i=k-1;i<n;i++)
	    {
	        if(arr[i] == maxi)
	            res += (n-i);
	    }
	    
	    cout << res << "\n";
	}
	return 0;
}
