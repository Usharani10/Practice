#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char a[20], b[15]="cominorg";
	int i, j, k, count=0, d, flag=0;
	clrscr();
	scanf("%s", a);
	for(i=0;a[i]!='\0';i++)
	{
		if(isupper(a[i]))
		{
			a[i]=tolower(a[i]);
		}
	}

	printf("%s\n", a);
	if(a[0]!='_'&&a[0]!='-'&&a[0]!='.')
	{
		for(i=1;a[i]!='\0';i++)
		{
			if(a[i]=='@'&&a[i+1]!='.'&&a[i+1]!=' '){
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
		d=i+1;
		while(1)
		{
			if(a[d++]=='.')
			{
				printf("%d", d);
				if(a[d]=='c'||a[d]=='i'||a[d]=='o')
				{
							k=d;
						for(j=0;b[j]!='\0';j++)
						{
							if(a[k++]==b[j])
							{
								count++;
								printf("%d", count);
							}
						}
				}
				if(count>=2)
				break;
			}
			if(a[d]=='\0')
			break;
		}
		}
		else
		printf("Not valid\n");
	}
	if(count>=2)
		printf("Valid\n");
	else
		printf("Not valid\n");
getch();
}
