#include<stdio.h>
#include<conio.h>
void main()
{
	char password[100], special_ch[15]="!@#$%^&*()-+";
	int i, lc=0, uc=0, d=0,sp=0, j=0,  n, add=0;
	clrscr();
	scanf("%d", &n);
	scanf("%s", password);
	if(n>=1&&n<=100)
	{
		for(i=0;i<n;i++)
		{
			if(password[i]>='a'&&password[i]<='z')
				lc=1;
			if(password[i]>='A'&&password[i]<='Z')
				uc=1;
			if(password[i]>='0'&&password[i]<='9')
				d=1;
			for(j=0;j<13;j++)
			{
				if(password[i]==special_ch[j])
				{
					sp=1;
					break;
				}
			}
			if(lc==1&&uc==1&&d==1&&n>=6)
			{
				printf("Given password is strong\n");
				break;
			}
			if(i==n-1)
			{
				if(lc!=1)
					add++;
				if(uc!=1)
					add++;
				if(d!=1)
					add++;
				if(sp!=1)
					add++;
				if(n+add<6)
					add=add+(6-n-add);
				printf("Need to add %d charaters\n", add);
			}

		}
	}
getch();
}






