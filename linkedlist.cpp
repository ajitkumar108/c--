#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
}*first;
void create(int arr[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
        
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    create(arr,n);
    display(first);
    return 0;
}