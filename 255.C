#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
}*temp, *first, *cur, *prev;
void insert();
void display();
void duplicate();
void main()
{
	int choice;
	clrscr();
	first=NULL;
	do
	{
		printf("Enter choice 1.insert 2. display 3. duplicate\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			insert();
			break;
			case 2:
			display();
			break;
			case 3:
			duplicate();
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
	int ele, choice;
	printf("Enter element to insert\n");
	scanf("%d", &ele);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=ele;
	temp->next=NULL;
	if(first==NULL)
		first=temp;
	else
	{
	       printf("Enter choice to insert 1. first 2. middle 3. end\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				temp->next=first;
				first=temp;
			break;
			case 2:
				printf("Enter after which element to insert\n");
				scanf("%d", &ele);
				cur=first;
				while(cur->data!=ele)
					cur=cur->next;
				temp->next=cur->next;
				cur->next=temp;
			break;
			case 3:
				cur=first;
				while(cur->next!=NULL)
					cur=cur->next;
				cur->next=temp;
			break;
		}
	}
}
void duplicate()
{
	cur=first;
      //	temp=prev->next;
	if(first==NULL)
		printf("List Empty");
	else
	{
		while(cur!=NULL)
		{
			temp=cur->next;
			prev=cur;
			while(temp!=NULL)
			{
				if(cur->data==temp->data)
				{
					prev->next=temp->next;
					temp->next=NULL;
					free(temp);
					temp=cur->next;
				}
				else
				{
					prev=temp;
					temp=temp->next;
				}
			}
		cur=cur->next;
		}
	}
}
void display()
{
	temp=first;
	if(first==NULL)
		printf("List Empty\n");
	else
	{
		while(temp!=NULL)
		{
			printf("%d ", temp->data);
			temp=temp->next;
		}
	}
}
