#include<stdio.h>
#include<conio.h>
void insert();
void Delete();
void display();
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*temp, *first, *cur;
void main()
{
	int choice;
	clrscr();
	first=NULL;
	do{
	printf("Enter the Choice 1. insert 2. delete 3. display\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
		insert();
		break;
		case 2:
		Delete();
		break;
		case 3:
		display();
		break;
		default:
		printf("Invalid choice\n");
		break;
	}
	}while(choice<4);
getch();
}
void insert()
{
	int choice, ele;
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d", &ele);
	temp->data=ele;
	if(first==NULL)
	{
		first=temp;
		first->prev=first->next;
		first->next=first;
	}
	else
	{
		printf("Enter choice to insert 1.first 2. middle 3.end\n");
		scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			cur=first;
			while(cur->next!=first)
				cur=cur->next;
			cur->next=temp;
			temp->prev=cur;
			temp->next=first;
			first->prev=temp;
			first=temp;
		break;
		case 2:
			cur=first;
			printf("Enter after which element to insert\n");
			scanf("%d", &ele);
			while(cur->data!=ele)
				cur=cur->next;
			temp->next=cur->next;
			cur->next->prev=temp;
			cur->next=temp;
			temp->prev=cur;
		break;
		case 3:
			cur=first;
			while(cur->next!=first)
				cur=cur->next;
			cur->next=temp;
			temp->prev=cur;
			temp->next=first;
			first->prev=temp;
		break;
		}
	}
}
void Delete()
{
	int choice, ele;
	if(first==NULL)
		printf("LIst Empty\n");
	else
	{
		printf("Enter Choice to delete 1. first 2. middle 3.end\n");
		scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			cur=first;
			while(cur->next!=first)
				cur=cur->next;
			temp=first;
			first=first->next;
			cur->next=first;
			first->prev=cur;
			temp->next=NULL;
			free(temp);
		break;
		case 2:
			printf("Enter which element to delete\n");
			scanf("%d", &ele);
			temp=first;
			while(temp->data!=ele)
			{
				cur=temp;
				temp=temp->next;
			}
			cur->next=temp->next;
			temp->next->prev=cur;
			temp->prev=NULL;
			temp->next=NULL;
			free(temp);
		break;
		case 3:
			temp=first;
			while(temp->next!=first)
			{
				cur=temp;
				temp=temp->next;
			}
			cur->next=first;
			first->prev=cur;
			temp->prev=NULL;
			free(temp);
		break;
		}
	}
}
void display()
{
       //	int count=0;
	temp=first;
	if(first==NULL)
		printf("List is empty\n");
	else
	{
		while(temp->next!=first)
		{
			printf("%d ", temp->data);
			temp=temp->next;
		      //	count++;
		}
		printf("%d ", temp->data);
	}
}