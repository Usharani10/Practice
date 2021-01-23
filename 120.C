#include<stdio.h>
#include<conio.h>
main()
{
     char a[30], c, input[10];
     int i=0, j, k;
     clrscr();
     for(i=0;i<26;i++)
	a[i]='a'+i;
	gets(input);
	for(j=0;input[j]!='\0';j++)
	{
		for(k=0;a[k]!='\0';k++) {
			if(input[j]==a[k])
				printf("%d",k+1);
		      }
		if(input[j]==' ')
				printf("$");

	}
getch();
}
