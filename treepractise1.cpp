#include<bits/stdc++.h>
using namespace std;
struct node
{
    node *lchild,*rchild;
    int data;
}*root=0;
void create(queue<node*>q)
{
node *p,*t;
int x;
cout<<"enter the value of root ";
cin>>x;
cout<<endl;
root=new node;
root->data=x;
root->lchild=root->rchild=0;
q.push(root);
while (!q.empty())
{
   p=q.front();
    q.pop();
    cout<<"enter the value of lchild ";
    cin>>x;
    cout<<endl;
    if(x!=-1)
    {
        t=new node;
        t->data=x;
        t->lchild=t->rchild=0;
        p->lchild=t;
        q.push(t);
    }
    cout<<"enter the value of rchild ";
    cin>>x;
    cout<<endl;
    if (x!=-1)
    {
        t=new node;
        t->data=x;
        t->lchild=t->rchild=0;
        p->rchild=t;
        q.push(t);
    }
    
}

}
void inorder(node *p)
{
    if (p!=0)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
    
}
int main()
{
    queue<node*>q;
    create(q);
    inorder(root);
    return 0;
}