#include<iostream>
using namespace std;
struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;
void insert(int key)
{
    node *t=root;
    node *r=NULL,*p;
    if(root==NULL)
    {
        p=new node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
        {
            t=t->lchild;
        }
        else if(key>t->data)
        {
            t=t->rchild;
        }
        else
        return;
    }
    p=new node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        if(key<r->data)
        r->lchild=p;
        else
        r->rchild=p;
}
void inorder(node *p)
{
    if(p!=NULL)
    {
        inorder(p->lchild);
        cout<<p->data<<endl;
        inorder(p->rchild);
    }
}
struct node *search(node *t,int key)
{
while (t!=NULL)
{
    if (key==t->data)
    {
        return t;
    }
    else if (key<t->data)
    {
      t=t->lchild;
    }
else
{
    t=t->rchild;
}
    
}
return NULL;
}
int main()
{
    struct node *temp;
    insert(10);
    insert(8);
    insert(5);
    insert(15);
    insert(20);
    inorder(root);
    temp=search(root,69);
    if (temp!=NULL)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    
    return 0;
}
