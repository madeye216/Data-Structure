#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
struct node  *START;
struct node *GetNode(){
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	return p;
}
void InsertBeg(int x){
	struct node *p;
	p=GetNode();
	p->info=x;
	p->next=START;
	START=p;
}
void InsEnd(int x){
	struct node *q,*p;
	q=START;
	while (q->next!=NULL)
	{
	  q=q->next;
	}
	p=GetNode();
	p->info=x;
	p->next=NULL;
	q->next=p;
}
void Traverse(){
	struct node *p;
	p=START;
	while(p!=NULL){
		printf("%d\t",p->info);
		p=p->next;
	}
	
}
int main(){
	START=NULL;
  int a=0,c=0;
  struct node *temp;
	InsertBeg(100);
	InsertBeg(200);
	InsertBeg(300);
	InsertBeg(400);
	InsertBeg(501);
	InsEnd(10);
	InsEnd(20);
	InsEnd(33);
	InsEnd(40);
  Traverse();
  temp=START;
while(temp!=NULL){
  
    a++;
    temp=temp->next;
 
}
printf("\n There are %d nodes",a);	
return 0;
}