#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*first;
void create(int *arr,int n)
{
    node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=0;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}
void insert(node*p,int pos,int x)
{
    node *t;
    if(pos==0)
    {
        t=new node;
        t->data=x;
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        p=p->next;
        t=new node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}
void print(node *p)
{
    while(p!=0)
    {
        cout<<p->data<<"\t";
        p=p->next;
    }
}
int main()
{
    int arr[7]={1,2,3,4,54,8,90};
    int n=7;
    create(arr,n);
    // print(first);
    insert(first,2,10);
    print(first);
}