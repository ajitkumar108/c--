#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int arr[5];
        int count=0;
        int temp=0;
        for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            if (arr[i]==1)
            {
                count++;
            }
            else if (arr[i]==2)
            {
                temp++;
            }
            
        }
        if (count>temp)
        {
            cout<<"INDIA"<<endl;
        }
        else if (temp>count)
        {
            cout<<"ENGLAND"<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }
        
    }
    
    return 0;
}