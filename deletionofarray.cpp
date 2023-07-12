#include<iostream>
using namespace std;
int main()
{
    int arr[50],b,c,count=0;
    cin>>b;
    for (int i = 0; i <b; i++)
    {
       cin>>arr[i]; 
    }
    cout<<"enter the number which you want to delete "<<endl;
    cin>>c;
    for (int i = 0; i < b; i++)
    {
        if (arr[i]==c)
        {
            for (int j = 0; j < b-1; j++)
            {
                arr[j]=arr[j+1];
            }
            count++;
            break;
        }
    }
     if(count==0)
        {
                cout<<"\nElement not found..!!\n";
        }
        else
        {
                cout<<"\nElement deleted successfully..!!\n";
                cout<<"\nNow the new array is ::\n";
                for(int i=0; i<(b-1); i++)
                {
                        cout<<arr[i]<<" ";
                }
        }
    cout<<"\n";
    return 0;
}