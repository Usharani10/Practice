#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char j[10], s[10];
	int i, l,  count=0, ans[10], k=0, tc, t, len_s, len_j;
	clrscr();
	scanf("%d", &tc);
	if(tc>=1&&tc<=100)
	{
		for(t=0;t<tc;t++)
		{
			scanf("%s %s", j, s);
			len_j=strlen(j);
			len_s=strlen(s);
			if(len_j>=1&&len_j<=100&&len_s>=1&&len_s<=100)
			{
				count=0;
				for(i=0;i<len_j;i++)
				{
					for(l=0;l<len_s;l++)
					{
						if(j[i]==s[l]){
							count++;
							s[l]=0;
							break;
						}
					}
				}
				ans[k++]=count;
			}
			else
				printf("Exceed");
		}
	}
	for(i=0;i<k;i++)
		printf("%d ", ans[i]);
getch();
}




