#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char map[10], name[10][10]={"sam", "tom", "harry"}, ph_no[3][10]={"123456789", "98765432", "45678765"};
	int number, i, j=0, count=0, len, k=0,ans[10], t, l;
	clrscr();
	scanf("%d",&number);
	for(t=0;t<number;t++)
	{
		scanf("%s",map);
		len=strlen(map);
		count=0;
		for(i=t;i<3;i++)
		{
			for(j=0;j<len;j++)
			{
				if(map[j]==name[i][j]&&map[j+1]==name[i][j+1])
				count++;
			}
			if(count==len)
			{
				ans[k++]=i;
				printf("%d\n", ans[k-1]);
				break;
			}
		}
	}
	for(i=0;i<k;i++)
	{
	l=ans[i];
	printf("%s\n", ph_no[l]);
	}

getch();
}



