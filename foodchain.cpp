#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int e,k,count=0;
	    cin>>e>>k;
	        while(e!=0)
	        {
	            e=e/k;
	            count++;
	        }
	        cout<<count<<endl;
	}
	return 0;
	}
