#include<iostream>
using namespace std;
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <5; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0,j=0; i < 5,j<5; i++,j++)
    {
        if (i==j&&arr[i][j]!=0)
        {
            cout<<arr[i][j]<<endl;
        }
        
    }
    
    return 0;
}