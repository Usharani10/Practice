#include<stdio.h>
#include<conio.h>
void show(struct node*);
void add(struct node*, struct node*, struct node*);
void insert(struct node *);
struct node
{
	int co_eff;
	int exp;
	struct node *next;
}*res, *l1, *l2, *temp;
void main()
{
	int choice;
	//first=NULL;
	clrscr();
		l1=(struct node *)malloc(sizeof(struct node));
		insert(l1);
		printf("First Number\n");
		show(l1);
		l2=(struct node *)malloc(sizeof(struct node));
		insert(l2);
		printf("Second Number\n");
		show(l2);
		res=(struct node *)malloc(sizeof(struct node));
		add(l1, l2, res);
		printf("\nAnswer\n");
		show(res);
getch();
}
void insert(struct node *temp)
{
	int choice, exp;
	float co_eff;
	do{
	scanf("%d %d", &temp->co_eff, &temp->exp);
       //	temp->co_eff=co_eff;
       //	temp->exp=exp;
	temp->next=(struct node*)malloc(sizeof(struct node));
	temp=temp->next;
	temp->next=NULL;
	printf("Enter 1 to continue\n");
	scanf("%d", &choice);
	}while(choice<2);
}
void add(struct node *l1, struct node *l2, struct node *res)
{
	//float co_eff;
	while(l1->next!=NULL && l2->next!=NULL)
	{
		if(l1->exp>l2->exp)
		{
			res->co_eff=l1->co_eff;
			res->exp=l1->exp;
			l1=l1->next;
		}
		else if(l1->exp<l2->exp)
		{
			res->co_eff=l2->co_eff;
			res->exp=l2->exp;
			l2=l2->next;
		}
		else
		{
			res->co_eff=l1->co_eff+l2->co_eff;
			res->exp=l1->exp;
			l1=l1->next;
			l2=l2->next;
		}
		res->next=(struct node*)malloc(sizeof(struct node*));
		res=res->next;
		res->next=NULL;
	       //	printf("%.2fx^%d", res->co_eff, res->exp);
	}
	while(l1->next!=NULL || l2->next!=NULL)
	{
		if(l1->next!=NULL)
		{
			res->co_eff=l1->co_eff;
			res->exp=l1->exp;
			l1=l1->next;
		}
		if(l2->next!=NULL)
		{
			res->co_eff=l2->co_eff;
			res->exp=l2->exp;
			l2=l2->next;
		}
		res->next=(struct node*)malloc(sizeof(struct node*));
		res=res->next;
		res->next=NULL;
	       //	printf("%.2fx^%d", res->co_eff, res->exp);
	}
}
void show(struct node *temp)
{
	while(temp->next!=NULL)
	{
		printf("%dx^%d", temp->co_eff, temp->exp);
		temp=temp->next;
		if(temp->next!=NULL)
		printf("+");
	}
}




