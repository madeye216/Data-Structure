#include<iostream>
using namespace std;
struct sparse *start;
struct sparse
{
	int row;
	int column;
	int data;
	struct sparse *next;
};
struct sparse* getnode()
{
	struct sparse *p;
	p=(struct sparse*)malloc(sizeof(struct sparse));
	return p;
}
void insert(int row,int column,int x)
{
	struct sparse *p=start;
	p=getnode();
	p->row=row;
	p->column=column;
	p->data=x;
	p->next=start;
	start=p;
}
void traverse()
{
	struct sparse *p=start;
	while(p!=NULL)
	{
		cout<<"("<<p->row<<","<<p->column<<")"<<":"<<p->data<<" ";
		p=p->next;
	}
}
int main()
{
	start=NULL;
	insert(1,1,1);
	insert(2,2,1);
	insert(3,3,1);
	traverse();
	return 0;
}