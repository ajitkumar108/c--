#include<iostream>
using namespace std;
int returnMax(int array[],int n)
{
int max = 0;
for (int i = 0; i < n; i++)
{
    if (array[i]>max)
    {
        max=array[i];
    }
    
}
return max;
}
int main()
{
    int arr[]={1,12,25,69,5478,21,41,1,10};
    int max= returnMax(arr,9);
    cout<<"the max value is "<<max<<endl;
    return 0;
}