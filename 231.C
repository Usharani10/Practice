#include<stdio.h>
#include<conio.h>
#define size 4
void push();
void pop();
void display();
int stack[size], top=-1;
void main()
{
	int choice;
	clrscr();
	do{
		printf("Enter choice 1.push 2.pop 3.display\n");
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
		default:
			printf("Invalid choice\n");
		break;
		}
	}while(choice<4);
getch();
}
void push()
{
	int ele;
	if(top>=size-1)
		printf("Stack overflow\n");
	else
	{
		printf("Enter element\n");
		scanf("%d", &ele);
		stack[++top]=ele;
	}
}
void pop()
{
	if(top==-1)
		printf("Stack underflow\n");
	else
		top--;
}
void display()
{
	int i;
	if(top==-1)
		printf("Stack underflow\n");
	else
	{
		for(i=0;i<=top;i++)
			printf("%d ", stack[i]);
	}
}




