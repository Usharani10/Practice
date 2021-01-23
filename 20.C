#include<stdio.h>
#include<conio.h>
void main()
{
int number, i, temp, rem, sum=0, c=0, choice, flag=0, j;
char t[10], string[10];
clrscr();
do{
scanf("%d", &choice);
switch(choice)
{
	case 1:
	printf("For number\n");
	scanf("%d", &number);
	temp=number;
	while(temp)
	{
		rem=temp%10;
		sum=sum*10+rem;
		temp/=10;
	}
	if(number==sum)
		printf("%d is palindrome", number);
	else
		printf("%d is not a palindrome", number);
	break;

	case 2:
	printf("For character\n");
	scanf("%s", string);
	for(i=0;string[i]!='\0';i++,c++);
	printf("%d", c);
	for(i=0;i<c;i++)
	t[i]=string[c-i-1];
	//printf("%s\n", t);
	for(j=0;j<c;j++){
	flag=0;
	if(string[j]==t[j])
	flag=1;
	}
	if(flag==1)
	printf("%s is Palindrome", string);
	else
	printf("%s is not a palindrome", string);
	break;
}
}while(choice<3);

getch();
}