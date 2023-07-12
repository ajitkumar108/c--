#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
    int a;
    cin>>a;
    int res=0;
    while(a)
    {
        if(a<=6)
	        {
	            res=res+a*6;
	            break;
	        }
	        else
	        {
	            res=res+33;
	            a=a-6;
	        }
        
    }
    cout<<res<<endl;
    }  
    return 0;
}