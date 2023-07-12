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
        int arr[a];
        int temp=0,count=0;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            temp++;
            else
            count++;
        }
         if(abs(temp-count)<2){
	        cout<<"YES"<<endl;
	    }else if(abs(temp-count)==2){
	        if(temp%2) cout<<"NO"<<endl;
	        else cout<<"YES"<<endl;
	    }else {
	        cout<<"NO"<<endl;
        }
    }
    
    return 0;
}