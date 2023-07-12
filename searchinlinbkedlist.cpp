#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node *next;
} *first = NULL;
void
create (int arr[], int n)
{
  struct node *t, *last;
  first = new node;
  first->data = arr[0];
  first->next = NULL;
  last = first;
  for (int i = 1; i < n; i++)
    {
      t = new node;
      t->data = arr[i];
      t->next = NULL;
      last->next = t;
      last = t;
    }
}

int
count (struct node *p)
{
  int count = 0;
  while (p != NULL)
    {
      count++;
      p = p->next;
    }
  return count;
}

void
display (struct node *p)
{
  if (p != NULL)
    {
      cout << p->data << endl;
      display (p->next);
      cout << p->data << endl;

    }
}

int
sum (struct node *p)
{
  int sum = 0;
  while (p != NULL)
    {
      sum = sum + p->data;
      p = p->next;
    }
  return sum;
}

int
max (struct node *p)
{
  int max = INT_MIN;
  while (p != NULL)
    {
      if (p->data > max)
	{
	max = p->data;
	}
      p = p->next;
    }
    return max;
}
int search(struct node*p,int x,int n)
{
    for(int i=0;i<n;i++)
    {
        if(p->data==x)
        {
            return i+1;
    }
    p=p->next;
}
}
int
main ()
{
  int arr[] = { 1, 2, 3, 4, 5, 6 };
  int n = sizeof (arr) / sizeof (arr[0]);
  create (arr, n);
  display (first);
  cout << "The total number of elements are   \t" << count (first) << endl;
  cout << "The sum of elements are    \t\t" << sum (first) << endl;
  cout<<"The maximum among the following is \t"<<max(first)<<endl;
  cout<<"The position of the element is \t\t"<<search(first,5,n);
  return 0;
}
