#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	const char *str[4];
	int a[20], i, len, k, j;
	clrscr();
	//gets(str);
	str[0]="I";
	str[1]="II";
	str[2]="III";
	str[3]="XXX";
	str[4]= "XIV";
	for(j=0;j<5;j++)
	{
	i=0;
     //	printf("%s\n", str[j]);
	len=strlen(str[j]);
     //	printf("%d\n",len);
	for(i=0;i<len;i++)
	{
	      //	printf("%c\n", str[j][i]);
		if(str[j][i]=='I')
		       a[i]=1;
		else if(str[j][i]=='V')
		       a[i]=5;
		else if(str[j][i]=='X')
			a[i]=10;
		else if(str[j][i]=='L')
			a[i]=50;
		else if(str[j][i]=='C')
			a[i]=100;
		else if(str[j][i]=='D')
			a[i]=500;
		else if(str[j][i]=='M')
			a[i]=1000;
		else{
			printf("Invalid character\n");
			break;
		}

	}
//        printf("%d", i);
	k=a[len-1];
	for(i=len-1;i>0;i--)
	{
		if(a[i]>a[i-1])
			k-=a[i-1];
	       else//	if(a[i]<=a[i-1])
			k+=a[i-1];
	}

	printf("%d\n", k);
       }
getch();
}