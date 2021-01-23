#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
       char a[20], symbol;
       int number1=0, number2=0, i, j=0, count=0, c=0, s=0, c1, len;
       clrscr();
       gets(a);
       len=strlen(a);
	for(i=0;a[i]!=' ';i++, count++);
       //printf("%d\n", count);
       c=count-1;
       for(i=0;i<count;i++)
       {
		j=pow(10, c--);
		number1=number1+(a[i]-48)*j;
       }
       printf("N1:%d\n", number1);
       c=0;
       for(i=count+1;a[i]!='\0';i++)
       {
		if(a[i]=='/' || a[i]=='%')
			symbol=a[i];
		if(a[i]==' ')
		{
		s+=i;
		continue;}
		if(a[i]!=' '&&a[i]!='/'&&a[i]!='%')
			c++;
       }
       c1=c-1;
       for(i=s+2;i<=len;i++)
       {
		j=pow(10, c1--);
		printf("%d %d %d\n",i, j, a[i-1]-48);
		number2=number2+(a[i-1]-48)*j;

       }
	printf("N2:%d\n", number2);
       if(symbol=='%')
		printf("%d\n", number1%number2);
       else if(symbol=='/')
		printf("%d\n", number1/number2);
       else
		printf("Invalid");
getch();
}










       /*	long int number1, number2;
	char symbol;
	clrscr();
	scanf("%ld %c %ld", &number1, &symbol, &number2);
	if(symbol=='%')
		printf("%ld\n", number1%number2);
	else if(symbol=='/')
		printf("%ld\n", number1/number2);
	else
		printf("Invalid");
getch();
}    */

