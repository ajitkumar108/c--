#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        int temp=0,count=0;
        int arr[a];
        for (int i = 0; i <a; i++)
        {
            cin>>arr[i];
            if (arr[i]>0)
            {
                count++;
            }
            else if(arr[i]<0)
            {
                temp++;
            }
        }
        cout<<(count*(count-1))/2 +(temp*(temp-1))/2<<endl;
    }
    
    return 0;
}