#include<stdio.h>
#include<conio.h>
void main()
{
	int tc, t, age, *b, i=0, k=0;;
	clrscr();
	scanf("%d", &tc);
	for(t=0;t<tc;t++)
	{
		scanf("%d", &age);
		if(age<0)
		{
			printf("Age is invalid. Setting to 0\nYou are young\n");
			age=0;
			//find_age(age);
			find_age(age+3);
		}
		else
		{
			b[k++]=find_age(age);
			b[k++]=find_age(age+3);
		}
	}
	for(i=0;i<k;i++)
	{
		if(age>=0&&age<13)
			printf("You are young\n");
		else if(age>=13&&age<18)
			printf("You are teenager\n");
		else
		printf("You are old\n");
	       //	printf("%d ", b[i]);
	}
getch();
}
int find_age(int age)
{
	static int a[10];
	static int i=0;
	if(age>=0&&age<13)
	      a[i++]=1;//	printf("You are young\n");
	else if(age>=13&&age<18)
	      a[i++]=2;//	printf("You are teenager\n");
	else
	       a[i++]=3;//	printf("You are old\n");
return a;
}

