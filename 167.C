#include<stdio.h>
#include<conio.h>
#include<string.h>
//w/o inbuit have to try. some of the code commented below.

void main()
{
	char a[10][10], temp[30];
	int i, j;
	clrscr();
	for(i=0;i<5;i++)
	{
		scanf("%s", a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(strcmp(a[i],a[i])>0)
			{
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s\n", a[i]);
	}
getch();
}


















/*void main()
{
	char a[20], b[10][10], letter;
	int i=0, j, temp, m=0, n=0, len, count=0;
	clrscr();
	gets(a);
	len=strlen(a);
	while(a[i]!='\0')
	{
		if(i==0)
		{
			for(j=0;a[j]!='\0';j++)
			{
				if(a[j]!=' ') {
				b[i][m++]=a[j];
				count++;
				}
				else
				break;
			}
			printf("m1:%d\n", m);
		}
		if(a[i]==' ')
		{       m=0;
			for(j=i+1;a[j]!='\0';j++)
			{
				if(a[j]!=' '){
				b[i][m++]=a[j];
				count++;
				temp=i;
				}
				else
				break;
			}
			printf("m2:%d\n", m);
		}
	i++;
		if(count==len)
		break;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c", b[i][j]);
		}
		printf("\n");

	}
getch();
}*/

