#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr1[n];
        int arr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        int max=arr1[0]+arr2[0];
        for(int i=1;i<n;i++)
        {
            int x=arr1[i]+arr2[i];
            if(x>max)
            {
                max=x;
            }
        }
        cout<<max<<endl;
        
    }
    
	return 0;
}