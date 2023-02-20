#include <iostream>
using namespace std;
#include <vector>
#include <queue>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *makenode(int x)
{
	struct node *p;
	p = (struct node *)malloc(sizeof(struct node));
	p->data = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}
void create_tree(struct node **tree)
{
	int choice, x;
	struct node *p;
	cout << "Whether left of " << (*tree)->data << " exist (1/0):";
	scanf("%d", &choice);
	if (choice == 1)
	{
		cout << "Input the information of the left node:";
		cin >> x;
		p = makenode(x);
		(*tree)->left = p;
		create_tree(&p);
	}
	cout << "Whether right of " << (*tree)->data << " exist (1/0):";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Input the information of the right node:";
		cin >> x;
		p = makenode(x);
		(*tree)->right = p;
		create_tree(&p);
	}
}
void Pre_Order_traversal(struct node *tree)
{
	if ((tree) != NULL)
	{
		cout << tree->data<<" ";
		Pre_Order_traversal((tree)->left);
		Pre_Order_traversal((tree)->right);
	}
}
void In_order_traversal(struct node *tree)
{
	if ((tree) != NULL)
	{
		In_order_traversal((tree)->left);
		cout << tree->data<<" ";
		In_order_traversal((tree)->right);
	}
}
void Post_order_traversal(struct node *tree)
{
	if ((tree) != NULL)
	{
		Post_order_traversal((tree)->left);
		Post_order_traversal((tree)->right);
		cout << tree->data<<" ";
	}
}
int height(struct node *tree)
{
	int l,r,max;
	if(tree==NULL)
	{
		return 0;
	}
	else
	{
		if (tree->left==NULL&&tree->right==NULL)
		{
			return 0;
		}
		else
		{
			l=height(tree->left);
			r=height(tree->right);
			max=l>r?l:r;
			return l+max;
		}
	}
}
void level_order_traversal(struct node *tree)
{
	queue<struct node *>q;
	q.push(tree);
	while(q.size()!=0)
	{
		struct node *x;
		x=q.front();
		q.pop();
		cout<<x->data<<" ";
		if(x->left!=NULL)
		{
			q.push(x->left);
		}
		if(x->right!=NULL)
		{
			q.push(x->right);
		}
	}
}
int main()
{
	struct node *root = NULL;
	int x;
	cout << "Input the information of the root node:";
	cin >> x;
	root = makenode(x);
	create_tree(&root);
	Pre_Order_traversal(root);
	cout<<endl;
	level_order_traversal(root);
	return 0;

}