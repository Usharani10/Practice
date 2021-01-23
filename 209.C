#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10], str2[10];
	int i, j, index[10], k=0, same=0, opp=0, len;
	clrscr();
	scanf("%s %s", str1, str2);
	len=strlen(str2);
	//printf("%d ", len);
	for(i=0;str2[i]!='\0';i++)
	{
		for(j=0;str1[j]!='\0';j++)
		{
			if(str2[i]==str1[j]&&str1[j]!='*')
			{
				index[k++]=j;
				str2[j]='*';
				break;
			}
		}
	}
	for(i=0;i<k;i++)
		printf("%d ", index[i]);
	for(i=0;i<k;i++)
	{
		if(index[i]<index[i+1])
			same++;
		else if(index[i]>index[i+1])
			opp++;

	}
	if(len==k){
	if(same==k-1)
		printf("In the same order\n");
	else if(opp==k-1)
		printf("In opposite order\n");
	else if(same!=k-1 && opp!=k-1 && same!=0 && opp!=0)
		printf("not in the order");
	else
		printf("opposite and same");
	}
	else
	printf("Not matched");
getch();
}
