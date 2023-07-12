#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        int num[]={6,2,5,5,4,5,6,3,7,6};
        int sum=a+b;
        int r,total=0;
        while(sum!=0){
	        r=sum%10;
	        total+=num[r];
	        sum=sum/10;
	    }
	    cout<<total<<endl;
    }
    
    return 0;
}