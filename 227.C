#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void insert();
void Delete();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *prev, *temp, *first, *cur;
void main()
{
	int choice;
	first=NULL;
	clrscr();
	do{
	printf("Enter the choice 1.insert 2.delete 3. display\n");
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
		printf("Invalid choice");
		break;
	}
	}while(choice<4);
getch();
}
void insert()
{
	int choice, ele, ele1;
       //	first=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element to insert\n");
	scanf("%d", &ele);
	temp->data=ele;
	if(first==NULL)
	{
		first=temp;
		first->next=first;
		//printf("%d ", first->data);
	}
	else
	{
	printf("Enter the postion  to insert\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("First\n");
			cur=first;
			while(cur->next!=first)
				cur=cur->next;
			temp->next=first;
			first=temp;
			cur->next=first;
		break;

		case 2:
			printf("Middle\nEnter after which element to insert\n");
			scanf("%d", &ele1);
			cur=first;
			while(cur->data!=ele1)
				cur=cur->next;
			temp->next=cur->next;
			cur->next=temp;
		break;
		case 3:
			printf("End\n");
			cur=first;
			while(cur->next!=first)
				cur=cur->next;
			cur->next=temp;
			temp->next=first;
		break;
	}
	}
}
void Delete()
{

	int choice, ele;
	temp=first;
	if(first==NULL)
		printf("List is Empty\n");
	else
	{
	printf("Enter the choice to delete");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			//temp=first;
			cur=first;
			while(cur->next!=first)
				cur=cur->next;
			temp=first;
			first=first->next;
			cur->next=first;
			/*cur->next=first;
			cur->next=first->next;
			first=first->next;
			temp->next=NULL;  */
			free(temp);
		break;

		case 2:
			printf("Enter which element to delete\n");
			scanf("%d", &ele);
		      //	temp=first;
			while(temp->data!=ele)
			{
				prev=temp;
				temp=temp->next;
			}
			prev->next=temp->next;
			temp->next->next=first;
			temp->next=NULL;
			free(temp);
		break;

		case 3:
		       //	temp=first;
			while(temp->next!=first)
			{
				prev=temp;
				temp=temp->next;
			}
			prev->next=first;
		       //	temp->next=NULL;
			free(temp);
		break;
	}
	}
}
void display()
{
	temp=first;
	if(first==NULL)
		printf("List is empty\n");
	else
	{
		while(temp->next!=first)
		{
			printf("%d ", temp->data);
			temp=temp->next;
		}
		printf("%d ", temp->data);


	}
}



