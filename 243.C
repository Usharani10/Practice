#include<stdio.h>
#include<conio.h>
struct BstNode
{
	int data;
	struct node *left;
	struct node *right;
}*root=NULL;
struct BstNode *insert(struct BstNode*, int);
struct BstNode *getnew(int);
void inorder(struct BstNode*);
void preorder(struct BstNode*);
void postorder(struct BstNode*);
void main()
{
	int choice;
	clrscr();
	root=insert(root, 90);
	root=insert(root, 30);
	root=insert(root, 20);
	root=insert(root, 40);
	root=insert(root, 70);
	root=insert(root, 60);
	root=insert(root, 80);
	do{
	printf("\nEnter Choice 1. inorder 2. preorder 3. postorder\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:	inorder(root); break;
		case 2:	preorder(root); break;
		case 3:	postorder(root);break;
		default: printf("Invalid\n");
	}
	}while(choice<4);
getch();
}
struct BstNode *insert(struct BstNode *root, int data)
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
struct BstNode *getnew(int data)
{
	struct BstNode *newnode=(struct BstNode*)malloc(sizeof(struct BstNode));
	newnode->data=data;
	newnode->left=newnode->right=NULL;
return newnode;
}
void inorder(struct BstNode *root)
{
	if(root!=NULL) {
	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);
	}
}
void preorder(struct BstNode *root)
{
	if(root==NULL)
		return;
	printf("%d ", root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct BstNode *root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ", root->data);
}



