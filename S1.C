#include<stdio.h>
#include<conio.h>
void main()
{
	char jewel[10];
	int tc, rs, i, j, t, k=0, amt[10], r=0;
	clrscr();
	scanf("%d", &tc);
	if(tc>=1&&tc<=100)
	{
		for(t=0;t<tc;t++)
		{
			scanf("%s", jewel);
			rs=0;r=0;
			for(i=0;jewel[i]!='\0';i++)
			{
				if(jewel[i]!='*')
				{
					for(j=i+1;jewel[j]!='\0';j++)
					{
						if(jewel[i]==jewel[j]&&jewel[j]!='*')
						{
							rs++;
							jewel[j]='*';
						}
					}
				}
			}
			for(i=0;jewel[i]!='\0';i++)
			{
				if(jewel[i]!='*')
				r++;
			}
			amt[k++]=rs/2+r;
		}

		for(i=0;i<k;i++)
			printf("%d ", amt[i]);

	}
getch();
}



