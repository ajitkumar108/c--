#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t; cin>>t;
	while(t--)
	{
	    long n; cin>>n;
	    vector<long> v;
	    map<long,long> m;
	    while(n--)
	    {
	        long a; cin>>a; 
	        if(m[a]==0)
	        {
	            m[a]=1;
	            v.push_back(a);
	        }
	    }
	    sort(v.begin(),v.end());
	    long l=v.size();
	    for(long i=l-1;i>=0;i--)
	        cout<<v[i]<<" ";
	   cout<<endl;
	}
	return 0;
}
