#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;
void create(int arr[],int n)
{
    struct node *t,*last;
    first=new node;
    first->prev=first->next=NULL;
    first->data=arr[0];
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
int length(struct node *p)
{
    int len=0;
    while(p!=0)
    {
        len++;
        p=p->next;
    }
    return len;
}
void display(node *p)
{
    while(p!=0)
    {
        cout<<p->data<<endl;
    p=p->next;
    }
}
void insert(node *p,int pos,int x)
{
    node *t;
    if(pos==0)
    {
        t=new node;
        t->data=x;
        t->next=first;
        t->prev=NULL;
        first->prev=t;
        first=t;
    }
    else
    {
        for(int i=0;i<pos-1;i++)
    {
        p=p->next;
    }
    t=new node;
    t->data=x;
    t->prev=p;
    t->next=p->next;
    if(p->next!=NULL)
    {
        p->next->prev=t;
        p->next=t;
    }
    }
}
 void middlenode(struct node *p)
 {
    struct node *q=p;
     while(q!=NULL)
     {
         q=q->next;
         if(q)
         {
             q=q->next;
         }
        else if(q)
         {
             p=p->next;
         }
     }
     cout<<"Middle element are  "<<p->data<<endl;
     
 }
void Delete(node*p,int pos)
{
 if(pos==0)
 {
   p=first;
   first=first->next;
   delete p;
   if(first!=NULL)
   {
       first->prev=NULL;
   }
 }
 else
 {
     for(int i=0;i<pos-1;i++)
     {
        p=p->next;
     }
     p->prev->next=p->next;
     if(p->next)
     {
         p->next->prev=p->prev;
     }
     delete p;
 }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    create(arr,n);
   cout<< length(first)<<" pornography  \t"<<endl;
    display(first);
    insert(first,0,69);
    insert(first,2,96);
    display(first);
    Delete(first,4);
    display(first);
    middlenode(first);
    return 0;
}

