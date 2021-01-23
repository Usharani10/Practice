#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	int i, j, temp=0;
	clrscr();
	gets(a);
	for(i=0;a[i]!='\0';i=i+1)
	{
		if(i%2!=0){
		if((a[i]>='1'&&a[i]<='9')&&(a[i+1]>=97&&a[i+1]<=122))
		temp=1;
		}
	}

	if(temp==1)
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='1'&&a[i]<='9')
		{
			for(j=0;j<a[i]-'1';j++)
				printf("%c",a[i-1]);
		}
		else
			printf("%c", a[i]);

	}
	else
	printf("invalid");
getch();
}