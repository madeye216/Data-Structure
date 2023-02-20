#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *child;
struct node *sibling;
struct node *left;
struct node *right;
};

struct node *makenode(int x)
{
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
p->data=x;
p->child=NULL;
p->sibling=NULL;
return p;
}
void Pre_Order_traversal(struct node *tree)
{
if((tree)!=NULL)
{
	printf("%d ",(tree)->data);
	Pre_Order_traversal((tree)->child);
	Pre_Order_traversal((tree)->sibling);
}
}
void In_order_traversal(struct node *tree)
{
if((tree)!=NULL)
{
	In_order_traversal((tree)->child);
	printf("%d ",(tree)->data);
	In_order_traversal((tree)->sibling);
}
}
void Post_order_traversal(struct node *tree)
{
if((tree)!=NULL)
{
	Post_order_traversal((tree)->child);
	Post_order_traversal((tree)->sibling);
	printf("%d ",(tree)->data);
}
}
int count_node(struct node *tree)
{
if((tree)==NULL)
{
	return 0;
}
else{
	return 1+count_node(tree->child)+count_node(tree->sibling);
}
}
struct node* create_node(struct node **tree)
{	
	int choice,x;
	struct node *p;
	printf("Whether child of %d exist (1/0):",(*tree)->data);
	scanf("%d",&choice);
	if (choice==1)
{
	printf("Input the information of the child node:");
	scanf("%d",&x); 
	p=makenode(x);
	(*tree)->child=p;
	create_node(&p);
}
	printf("Whether sibling of %d exist (1/0):",(*tree)->data);
	scanf("%d",&choice);
	if (choice==1)
{
	printf("Input the information of the sibling node:");
	scanf("%d",&x); 
	p=makenode(x);
	(*tree)->sibling=p;
	create_node(&p);
}
return *tree;
}
struct node* General_to_binary(struct node **tree)
{
	
}
int main()
{
struct node *root; 
int x,y;
root =NULL;
printf("Input the information of root node:");
scanf("%d",&x);
root=makenode(x);
root=create_node(&root);
printf("Pre Order:");
Pre_Order_traversal(root);
printf("\nPost Order:");
Post_order_traversal(root);
printf("\nIn Order:");
In_order_traversal(root);
printf("\n");
y=count_node(root);
printf("%d",y);
return 0;
}