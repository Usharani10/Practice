#include<stdio.h>
#include<conio.h>
void enqueue();
void dequeue();
void display();
struct node
{
	int data;
	struct node *next;
}*front, *rear, *new_node, *temp;
void main()
{
	int choice;
	clrscr();
	front=NULL;
	rear=NULL;
	do{
	printf("Enter the choice 1.Enqueue 2. Dequeue 3. Display 4. Exit\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
		enqueue();
		break;
		case 2:
		dequeue();
		break;
		case 3:
		display();
		break;
		default:
		exit(0);
		break;
	       //	default:
//		printf("Invalid choice\n");
  //		break;
	}
	}while(choice<5);
}
void enqueue()
{
	int ele;
	printf("Enter element\n");
	scanf("%d", &ele);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=ele;
	new_node->next=NULL;
	if(rear==NULL && front==NULL)
	{
		front=new_node;
		rear=new_node;
	}
	else
	{
		rear->next=new_node;
		rear=new_node;
	}
}
void dequeue()
{
	if(front==NULL)
	{
		printf("Underflow\n");
		front=rear=NULL;
	}
	else
	{
		temp=front;
		front=front->next;
		free(temp);
	}
}
void display()
{
	struct node *i;
	if(rear==NULL||front==NULL)
	{
		printf("Unferflow\n");
		front=rear=NULL;
	}
	else
	{
		for(i=front;i!=NULL;i=i->next)
			printf("%d ", i->data);
	}
}



