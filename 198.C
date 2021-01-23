#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10];
	int size, i, j, temp=0;;
	clrscr();
	//scanf("%d",&size);
	//for(i=0;i<size;i++)
	  //	scanf("%d", &a[i]);
	gets(a);
	size=strlen(a);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				temp=1;
				break;
			}
		}
		if(temp==1)
		{
			printf("It is not an isogram\n");
			break;
		}
	}
	if(temp==0)
		printf("It is an isogram\n");
	getch();
}
