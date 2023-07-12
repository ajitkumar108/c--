#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {
    if(arr[i]==element)
   {
    return i;
   }
 }
   return -1;
}
int binarysearch()
{
  
}
int main()
{
int arr[]={1,00,20,35,44,21,200,11,7,4,69};
int size = sizeof(arr)/sizeof(int);
int element=00;
int searchindex=linearsearch(arr,size,00);
cout<<element<<"\n"<<searchindex<<endl;
    return 0;
}