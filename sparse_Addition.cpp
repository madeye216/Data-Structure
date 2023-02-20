#include<iostream>
using namespace std;
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
void insert(struct sparse **start,int row,int column,int x)
{
	struct sparse *p=(*start);
	p=getnode();
	p->row=row;
	p->column=column;
	p->data=x;
	p->next=(*start);
	(*start)=p;
}
struct sparse* Build_Sparse(struct sparse **start)
{
	int count,x,y,d;
	cout<<"Is there a node (0/1):";
	cin>>count;
	while(count!=0)
	{
		cout<<"Enter the row value:";
		cin>>x;
		cout<<"Enter the column value:";
		cin>>y;
		cout<<"Enter the data:";
		cin>>d;
		insert(start,x,y,d);
		cout<<"Is there a node(1/0):";
		cin>>count;
	}
	return *start;
}
void traverse(struct sparse **start)
{
	struct sparse *p=(*start);
	while(p!=NULL)
	{
		cout<<"("<<p->row<<","<<p->column<<")"<<":"<<p->data<<" ";
		p=p->next;
	}
}
int main()
{
	struct sparse *start;
	start=NULL;
	Build_Sparse(&start);
	traverse(&start);
	return 0;
}