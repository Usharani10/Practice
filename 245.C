#include<stdio.h>
#include<conio.h>
#define size 10
struct node
{
	char data;
	struct node *left;
	struct node *right;
}*temp, *root;
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
struct node *insert(char *);
void push(struct node *);
struct node *pop();
char input[size];
struct node *stack[size];
int top=-1;
void main()
{
	clrscr();
	printf("Enter the expressin\n");
	gets(input);
	root=insert(input);
	printf("\nInorder\n");
	inorder(root);
	printf("\nPreorder\n");
	preorder(root);
	printf("\nPostorder\n");
	postorder(root);
getch();
}
struct node *insert(char exp[])
{
	int i;
	for(i=0;i<size;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=exp[i];
		temp->left=temp->right=NULL;
		if(isalpha(exp[i]))
			push(temp);
		else
		{
			if(exp[i]=='+'||exp[i]=='-'||exp[i]=='/'||exp[i]=='*')
			{
				temp->right=pop();
				temp->left=pop();
				push(temp);
			}

		}
	}
		temp=pop();
		return temp;

}
void push(struct node *temp)
{
	if(top>=size-1)
		printf("Overflow\n");
	else
		stack[++top]=temp;
       //	return stack[top];
}
struct node *pop()
{
	if(top==-1)
		printf("Underflow\n");
	else
	{
		top--;
		return stack[top+1];
	}
}
void inorder(struct node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%c ", root->data);
	inorder(root->right);
}
void preorder(struct node *root)
{
	if(root==NULL)
		return;
	printf("%c ", root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%c ", root->data);
}













