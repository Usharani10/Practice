#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
}*root=NULL, *temp;
struct node *insert(struct node *, int);
struct node *getnew(int);
struct node *search(struct node *, int);
struct node *inorderSuccessor(struct node *, int);
void inorder(struct node *);
void main()
{
	struct node *ans;
	clrscr();
	root=insert(root, 15);
	root=insert(root, 10);
	root=insert(root, 20);
	root=insert(root, 8);
	root=insert(root, 12);
	root=insert(root, 17);
	root=insert(root, 25);
	root=insert(root, 6);
	root=insert(root, 11);
	root=insert(root, 16);
	root=insert(root, 27);
	inorder(root);
	ans=inorderSuccessor(root, 6);
	printf("\nSuccessor:%d", ans->data);
getch();
}
struct node *insert(struct node *root, int data)
{
	if(root==NULL)
		root=getnew(data);
	else
	{
		if(data<root->data)
			root->left=insert(root->left, data);
		else
			root->right=insert(root->right, data);
	}
	return root;
}
struct node *getnew(int data)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=newnode->right=NULL;
return newnode;
}
struct node *inorderSuccessor(struct node *root, int data)
{
	struct node *current=search(root, data);
	if(current==NULL)
		return;
	if(current->right!=NULL)
	{
		temp=current->right;
		if(temp==NULL) return;
		while(temp->left!=NULL)
			temp=temp->left;
		return temp;
	}
	else
	{
		struct node *successor=NULL;
		struct node *ancestor=root;
		while(current!=ancestor)
		{
			if(current->data<ancestor->data)
			{
				successor=ancestor;
				ancestor=ancestor->left;
			}
			else
				ancestor=ancestor->right;

		}
		return successor;
	}
}
struct node *search(struct node *root, int data)
{
	if(data<root->data)
		return search(root->left, data);
	else if(data==root->data)
		return root;
	else
		return search(root->right, data);
       //	return root;
}
void inorder(struct node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}


