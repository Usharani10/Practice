#include<stdio.h>
#include<conio.h>
struct BstNode
{
	char data;
	struct node *left;
	struct node *right;
}*root=NULL;
struct BstNode *insert(struct BstNode*, char);
struct BstNode *getnew(char);
int inorder(struct BstNode*);
//void preorder(struct BstNode*);
//void postorder(struct BstNode*);
void main()
{
	int choice;
	clrscr();
	root=insert(root, 'f');
	root=insert(root, 'd');
	root=insert(root, 'j');
	root=insert(root, 'b');
	root=insert(root, 'e');
	root=insert(root, 'g');
	root=insert(root, 'k');
	root=insert(root, 'a');
	root=insert(root, 'c');
	choice=inorder(root);
	printf("%d", choice);
	/*do{
	printf("\nEnter Choice 1. inorder 2. preorder 3. postorder\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:	inorder(root); break;
		case 2:	preorder(root); break;
		case 3:	postorder(root);break;
		default: printf("Invalid\n");
	}
	}while(choice<4); */
getch();
}
struct BstNode *insert(struct BstNode *root, char data)
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
struct BstNode *getnew(char data)
{
	struct BstNode *newnode=(struct BstNode*)malloc(sizeof(struct BstNode));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
return newnode;
}
int inorder(struct BstNode *root)
{
	static int count=0;
	if(root==NULL)return;
	inorder(root->left);
	if(root->left==NULL&&root->right==NULL) {
		printf("%c ", root->data);
		count++;
	}
	inorder(root->right);
       return  count;

}
/*void preorder(struct BstNode *root)
{
	if(root==NULL)
		return;
	printf("%c ", root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct BstNode *root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%c ", root->data);
}  */



