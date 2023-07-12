#include<bits/stdc++.h>
#include<vector>
using namespace std;
int deleteElement(int arr[], int n, int x)
{
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
    break;
if (i < n)
{
    n = n - 1;
    for (int j=i; j<n; j++)
    arr[j] = arr[j+1];
}
return n;
}
int main()
{
    int m,n,p,k;
    cin>>m;    //m = number of books;
    int arr[m];
    
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cin>>n;     //n = number of books borrowed by his friends;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        cout<<arr[k-1]<<endl;        
        m=deleteElement(arr,m,arr[k-1]);   
    }   
    return 0;
}