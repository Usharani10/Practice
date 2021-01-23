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
int findmin(struct BstNode *);
int height(struct BstNode*);
int findmax(struct BstNode*);
int max(int, int);
void main()
{
	int choice, ans;
	clrscr();
	root=insert(root, 50);
	root=insert(root, 30);
	root=insert(root, 20);
	root=insert(root, 40);
	root=insert(root, 70);
	root=insert(root, 60);
	root=insert(root, 80);
	printf("\nEnter Choice 1. Findmin 2. Find max\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			ans=findmin(root);
			printf("%d", ans);
			break;
		case 2:
			ans=findmax(root);
			printf("%d", ans);
			break;
		case 3:
			ans=height(root);
			printf("%d", ans);
			break;
		default: printf("Invalid\n");
	}

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
int findmin(struct BstNode *root)
{
	int temp;
	if(root==NULL)
		return;
	else if(root->left==NULL)
		return root->data;
	else
	return findmin(root->left);
      /*	while(root->left!=NULL)
		root=root->left;
	temp= root->data;
	return temp;  */
}
int findmax(struct BstNode *root)
{
	int temp;
	if(root==NULL)
		return;
	while(root->right!=NULL)
		root=root->right;
	temp=root->data;
	return temp;
}
int height(struct BstNode *root)
{
	int minlen, maxlen, ans;
	if(root==NULL)
		return 0;
	else
	{
		minlen=height(root->left);
		maxlen=height(root->right);
		ans=max(minlen, maxlen);
		printf("%d ",ans);
		return ans+1;
	}
}
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

