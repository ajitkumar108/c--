#include<bits/stdc++.h>
using namespace std;
struct node
{
    node *lchild,*rchild;
    int data;
}*root=NULL;
void create(queue<node*>q)
{
node *p,*t;
int x;
cout<<"enter the value of the root ";
cin>>x;
cout<<endl;
root =new node;
root->data=x;
root->lchild=root->rchild=0;
q.push(root);
while (!q.empty())
{
    p=q.front();
q.pop();
cout<<"enter the vlaue of lchild ";
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
if(x!=-1)
{
    t=new node;
    t->data=x;
    t->lchild=t->rchild=0;
    p->rchild=t;
    q.push(t);
}
}
}
void preorder(node *p)
{
    if(p!=0)
    {
        preorder(p->lchild);
        cout<<p->data<<" ";
        preorder(p->rchild);
    }
    
}
void itreative(node *p)
{
    stack<node*>st;
    while(p||st.empty())
    {
        if(p)
        {
            cout<<p->data<<" ";
            st.push(p->lchild);
            p=p->lchild;
        }
        else
        {
            p=st.top();
            st.pop();
            p=p->rchild;
        }
        
    }
}
int main()
{
    queue<node*>q;
    create(q);
    //preorder(root);
    itreative(root);
    return 0;
}