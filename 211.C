#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[15], str2[15];
	int i, j, sp_count=0, count=0, plus=0, star=0, k;
	clrscr();
	gets(str1);
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='?'||str1[i]=='*'||str1[i]=='+')
		sp_count++;
	}

	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			if(str1[i]=='?'){
			if(str1[i+1]==str2[i+1])
				count++;
			}
			else if(str1[i]=='*')
			{
				for(k=i+1;str2[k]!='\0';k++)
				{
					if(str2[k]!=str1[i])
						star++;
				}
				if(star>1)
					count++;
			}
			else if(str1[i]=='+')
			{
				for(k=i+1;str2[k]!='\0';k++)
				{
					if(str2[k]==str1[i-1])
						plus++;
				}
				if(plus==0||plus>0)
					count++;
			}
		       //	else
			     //	printf("No char found\n");
		}
	}
	printf("%d ", count);
	if(sp_count==count)
		printf("True");
	else
		printf("False");
getch();
}


