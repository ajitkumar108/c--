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
        int count=0,temp=0;
       int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        count++;
        else if (arr[i]==2)
        {
            temp++;
        }
        
    }
           cout<<(count*(count-1))/2+(temp*(temp-1))/2+(a-count)*count<<endl;
    }
    
    return 0;
}