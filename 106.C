#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[30], word[10], count=0;
	int i,j=0, len, k;
	clrscr();
	gets(str);
	gets(word);
	len=strlen(word);

	for(i=0;str[i]!='\0';i++)
	{
		count=0;j=0;
		if(word[j]==str[i])
		{
			k=i;
			for(j=0;word[j]!='\0';j++)
			{
				if(word[j+1]==str[k+1])
				{
					count++;
					k++;
				}
				else
					break;
			       //	printf("%d\n", count);
			}
			if(count==len){
				printf("Word is Present\n");
				break;
				}
		}
	}
getch();
}/*






	for(i=0;word[i]!='\0';i++)
	{
		for(j=0;str[j]!='\0';j++)
		{
			if(word[i]==str[j])
			{

				count++;
				break;
			}
		}
	}
	if(len==count)
	printf("Word is Present\n");
	else
	printf("Not Present\n");
getch();
}*/