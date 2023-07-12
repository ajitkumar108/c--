#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*first=NULL;
void create(int arr[], int n)
{
struct node *t,*last;
first=new node;
first->data=arr[0];
first->next=NULL;
last=first;
for (int i = 0; i < n; i++)
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
  if (p!=NULL)
  {
      cout<<p->data<<endl;
      display(p->next);
  }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    create(arr ,n);
    display(first);
    return 0;
}