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
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        int count=1;
        for (int i = 0; i < a-1; i++)
        {
            if (arr[i+1]<arr[i])
            {
                count++;
                continue ;
            }
            else
            {
                arr[i+1]=arr[i];
                continue;
            }
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}