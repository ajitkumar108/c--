#include <iostream>
#include <algorithm>
using namespace std;
int main() {
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int k;
     cin>>k;
     k=k-1;
     int num;
     num=arr[k];
    sort(arr,arr+n);     
     for(int i=0;i<n;i++)
     {
           if(arr[i]==num)
           {
               cout<<i+1;
           }
     }
     cout<<endl;
}
	return 0;
}
