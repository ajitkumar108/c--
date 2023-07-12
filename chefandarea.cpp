#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,s1,s2,max;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    cin>>s1>>s2;
	    if(s=="triangle")
	    {
	        max=s1*s2;
	        cout<<max<<endl;
	    }
	    else if(s=="square")
	    {
	        max=0.5*s1*s2;
	        cout<<max<<endl;
	    }
	    else if(s=="rectangle")
	    {
	        max= s1*s2;
	        cout<<max<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
