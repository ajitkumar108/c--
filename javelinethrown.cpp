#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
    	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int temp[n];
	    for(int i=0;i<n;i++)
	    {
	        temp[i]=arr[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        
	        if(arr[i]>=m)
	        {
	            count++;
	        }
	    }
	    sort(temp,temp+n);
	    if(count>=k)
	    {
	        cout<<count<<" ";
	        int op[count],l=0;
	        for(int i=0;i<n;i++)
	        {
	            if(temp[i]>=m)
	            {
	                for(int j=0;j<n;j++)
	                {
	                    if(arr[j]==temp[i])
	                    {
	                        
	                        op[l]=j+1;
	                        l++;
	                    }
	                }
	            }
	        }
	        sort(op,op+count);
	        for(int i=0;i<count;i++)
	        {
	            cout<<op[i]<<" ";
	        }
	        cout<<"\n";
	    }
	    else
	    {
	        cout<<k<<" ";
	        int l=0;
	        int p=n-k;
	        int op1[k];
	        for(int i=p;i<n;i++)
	            {
	                for(int j=0;j<n;j++)
	                {
	                    if(arr[j]==temp[i])
	                    {    
	                        op1[l]=j+1;
	                        l++;
	                    }
	                }
	            
	        }
	        sort(op1,op1+k);
	        for(int i=0;i<k;i++)
	        {
	            cout<<op1[i]<<" ";
	        }
	        cout<<"\n";
	    }
	    
	}	
	return 0;
}