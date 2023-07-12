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
        int count=0;
        for (int i = 0; i <a; i++)
        {
            cin>>arr[i];
            if (arr[i]%7==0||(arr[i]+1)%7==0)
            {
                continue;
            }
            else
            {
                count++;
            }
                        
        }
        cout<<count+8<<endl;
    }
    
    return 0;
}