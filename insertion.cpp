#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
     cout<<arr[i]<<endl;
    }
 
} 
    int indinsertion(int arr[],int size,int element,int capacity,int index)
    {
if (size>=capacity)
{
    return -1;
}
for (int i = 0; i>=index ; i--)
{
arr[i+1]=arr[i];
}
arr[index]=element;
return 1;

    }

int main()
{
    int arr[100]={1,2,5,6,45,23};
    int size=6, element = 69 ,index=3;
    display(arr,size);
    indinsertion(arr , size , element , 100 , index);
    size +=1;
    display(arr ,size);
    return 0;
}