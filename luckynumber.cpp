#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int arr[3];
        int count=0;
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i]%7==0&&arr[i]>0)
            {
                count++;
            }
           
        }
        if (count!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}