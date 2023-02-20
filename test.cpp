#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node *next;
};

struct node* getnode()
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	return p;
}

void insbeg(struct node **start,int x)
{
	struct node *p=*start;
	p=getnode();
	p->data=x;
	p->next=(*start);
	(*start)=p;
}

void insend(struct node **start,int x)
{
	struct node *p=(*start),*q=(*start);
	if(p==NULL)
	{
		insbeg(start,x);
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		p=getnode();
		q->next=p;
		p->data=x;
		p->next=NULL;
	}
}
void traverse(struct node **start)
{
	struct node *p=(*start);
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main()
{
	struct node *start=NULL;
	insend(&start,100);
	traverse(&start);
}