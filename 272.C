#include<stdio.h>
#include<conio.h>
void insert();
void display();
struct node
{
	char data[10];
	struct node *next;
}*first, *temp, *cur;
void main()
{
	int choice;
	clrscr();
	first=NULL;
	do{
	printf("Enter choice 1.insert 2. display\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			insert();
			break;
		case 2:
			display();
			break;
		default:
			printf("Invalid");
		break;
	}
	}while(choice<3);

getch();
}
void insert()
{
	char input[10];
	printf("Enter String\n");

       scanf("%s", input);
      //	gets(input);
	temp=(struct node*)malloc(sizeof(struct node));
	strcpy(temp->data, input);
	//temp->data=input;
	temp->next=NULL;
	if(first==NULL)
		first=temp;
	else
	{
		cur=first;
		while(cur->next!=NULL)
			cur=cur->next;
		cur->next=temp;
	}
}
void display()
{
	temp=first;
	if(first==NULL)
		printf("Empty\n");
	else
	{
		while(temp!=NULL)
		{
			printf("%s ", temp->data);
			temp=temp->next;
		}
	}
}


