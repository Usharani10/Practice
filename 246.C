#include<stdio.h>
#include<conio.h>
#include<limits.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
}*root, *temp;
int len;
struct node *insert();
int bst(struct node *);
int bst_check(struct node *, int, int);
int inorder(struct node *);
void main()
{
       //	struct node *root;
	int ans;
	clrscr();
	root=insert();
	ans=inorder(root);
	//ans=bst(root);
	if(ans==1)printf("Yes\n");
	else printf("No\n");
	getch();
}
int inorder(struct node *root)
{
	int min, max;
	if(root==NULL) return 0;
	if(root->left!=NULL)
		max=findmax(root->left);
	else
		max=root->data;
	if(root->right!=NULL)
		min=findmin(root->right);
	else
		min=root->data;
       //	printf("MIN:%d MAX:%d", min, max);
	if(min>root->data&&max<root->data)
		return 1;
	else
		return 0;

}
int findmax(struct node *root)
{
	if(root->right!=NULL)
	{
		while(root->right>root->data)
		root=root->right;
	}
	return root->data;
}
int findmin(struct node *root)
{
	if(root->left!=NULL)
	{
	while(root->left<root->data)
		root=root->left;
	}
	return root->data;
}

struct node *insert()
{
    struct node *temp;
    int number;
    printf("Enter data(-1 for no node):");
    scanf("%d",&number);

    if(number==0)
	return NULL;

    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=number;
    printf("Enter left child of %d:\n",number);
    temp->left=insert();
    printf("Enter right child of %d:\n",number);
    temp->right=insert();
    return temp;
}
/*int bst(struct node *root)
{
	int ans;
	ans=bst_check(root, INT_MIN, INT_MAX);
	return ans;
}
int bst_check(struct node *root, int min, int max)
{
	if(root==NULL)
	return 1;
	if(root->data>min && root->data<max && bst_check(root->left, min, root->data) && bst_check(root->right, root->data, max))
		return 1;
	else
	return 0;
}*/

