#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void Asc_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    cout<<"Array after sorting in ascending order: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"\n";
}
void Desc_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j+1]>arr[j])
            {
                swap(&arr[j+1],&arr[j]);
            }
        }
    }
    cout<<"Array after sorting in ascending order: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;;
    }
    cout<<"\n";
}
int main()
{
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Asc_sort(arr,n);
    Desc_sort(arr,n);
    
    return 0;
}