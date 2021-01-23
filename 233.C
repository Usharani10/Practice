#include<stdio.h>
#include<conio.h>
#define size 5
void push();
void pop();
void display();
static int count;
struct node
{
	int data;
	struct node *next;
}*top, *new_node, *first, *temp, *prev;
void main()
{
	int choice;
	clrscr();
	top=NULL;
	do{
	printf("Enter choice 1. Push 2. Pop 3. Display 4. Exit\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
		push();
		break;
		case 2:
		pop();
		break;
		case 3:
		display();
		break;
		case 4:
		exit(0);
		break;
		default:
		printf("Invalid Choice\n");
		break;
	}
	}while(choice<5);
}
void push()
{
	int ele;
	if(count++!=size)
	{
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter element\n");
	scanf("%d", &ele);
	new_node->data=ele;
	if(top==NULL)
	{
		top=new_node;
		top->next=NULL;
	}
	else{
		new_node->next=top;
		top=new_node;
	}
	}
	else
		printf("Overflow\n");
}
void pop()
{
	if(count==0)
		printf("Underflow\n");
	else
	{
		temp=top;
		top=top->next;
		temp->next=NULL;
		free(temp);
		count--;
	}
}
void display()
{
	temp=top;
	if(count==0)
		printf("Empty\n");
	else
	{
		while(temp!=NULL)
		{
			printf("%d ", temp->data);
			temp=temp->next;
		}
	}
}
