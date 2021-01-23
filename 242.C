#include<stdio.h>
#include<conio.h>
struct BstNode
{
	int data;
	struct BstNode *left;
	struct BstNode *right;
};
	struct BstNode *root=NULL;
struct BstNode *Insert(struct BstNode *, int);
struct BstNode *GetNew(int);
struct BstNode *Delete(struct BstNode *, int);
struct BstNode *Findmin(struct BstNode *);
int search(struct BstNode*,int);
int display(struct BstNode *);
int main()
{
	int number, choice, ans;
	clrscr();
	do
	{
		printf("Enter the choice 1. Insert 2. Search 3. Delete 4.Display\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to insert\n");
				scanf("%d", &number);
				root=Insert(root, number);
			break;
			case 2:
				printf("Enter element to search\n");
				scanf("%d", &number);
				ans=search(root, number);
				if(ans==1)
				printf("Found\n");
				else
				printf("Not found\n");
			break;
			case 3:
				printf("Enter the element to delete\n");
				scanf("%d", &number);
				Delete(root, number);
				break;
			case 4:
				display(root);
				break;
			default:
				printf("Invalid\n");
			break;
		}
	}while(choice<5);
getch();
return 0;
}
struct BstNode *Insert(struct BstNode* root,int data)
{
	if(root == NULL) {
		root = GetNew(data);
	}
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

struct BstNode *GetNew(int data)
{

	struct BstNode *New=(struct BstNode*)malloc(sizeof(struct BstNode));
	New->data=data;
	New->left=New->right=NULL;
return New;
}
int search(struct BstNode *root, int ele)
{
	if(root==NULL)
		return 0;
	else if(root->data==ele)
		return 1;
	else if(root->data>ele)
	       return search(root->left, ele);
	else
		return search(root->right, ele);
}
struct BstNode *Delete(struct BstNode *root, int data)
{
	if (root==NULL)
		return root;
	else if(data<root->data)
		root->left=Delete(root->left, data);
	else if(data>root->data)
		root->right=Delete(root->right, data);
	else
	{
		if(root->right==NULL && root->left==NULL)
		{
			free(root);
			root=NULL;
		}
		else if(root->left==NULL)
		{
			struct BstNode *temp=root;
			root=root->right;
			free(temp);
		}
		else if(root->right==NULL)
		{
			struct BstNode *temp=root;
			root=root->left;
			free(temp);
		}
		else
		{
			struct BstNode *temp=Findmin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right, temp->data);
			free(temp);
		}
		return root;
	}
}
struct BstNode* Findmin(struct BstNode *root)
{
	while(root->left!=NULL)
		root=root->left;
	return root;
}
int display(struct BstNode *root)
{
	if(root==NULL)
		return;
	display(root->left);
	printf("%d ", root->data);
	display(root->right);
}


