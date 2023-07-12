#include<iostream>
using namespace std;
struct node
{
    node *lchild,*rchild;
    int data;
}*root=0;
void insert(int key)
{
    node *t=root;
    node *p=0,*r;
    if (root==0)
    {
        p=new node;
        p->data=key;
        p->lchild=p->rchild=0;
        root=p;
        return ;
    }
    while (t!=0)
    {
        r=t;
        if (key<t->data)
        {
            t=t->lchild;
        }
        else if (key>t->data)
        {
            t=t->rchild;
        }
        else
        return ;
    }
    p=new node;
    p->data=key;
    p->rchild=p->lchild=0;
    if (key<r->data)
    {
        r->lchild=p;
    }
    else
    {
        r->rchild=p;
    }
    
}
void inorder(node *p)
{
    if (p)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
    
}
int main()
{
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    inorder(root);
    cout<<endl;
    return 0;
}