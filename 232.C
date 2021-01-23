#include<stdio.h>
#include<conio.h>
#define size 3
void enqueue();
void dequeue();
void display();
int queue[size];
int rear=-1;
int front=-1;
void main()
{
	int choice;
	clrscr();
	do{
		printf("Enter choice 1. enqueue 2.dequeue 3.display\n");
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
				printf("Invalid choice\n");
			break;
		}
	}while(choice<4);
}
void enqueue()
{
	int ele;
	printf("Enter element");
	scanf("%d", &ele);
	if(rear==-1&&front==-1)
	{
		front=0;
		rear=0;
		queue[rear]=ele;

	}
	else
	{
	if(rear==size-1)
		printf("Overflow\n");
	else
		queue[++rear]=ele;
	}
}
void dequeue()
{
	int i;
	if(front==-1)
		printf("Underflow\n");
       //	else if(rear==front)
	 //	front=0;
	else{
	       //	front++;
	       if(front==rear)
	       {
		front=-1;
		rear=-1;
	       }
	       else{
		for(i=front+1;i<=rear;i++)
			queue[i-1]=queue[i];
	       //	front++;
		rear--;
		}
	       }

}
void display()
{
	int i;
	if(rear==-1||front==-1)
		printf("Empty");
	else{
	for(i=front;i<=rear;i++)
		printf("%d ", queue[i]);
		}
}

