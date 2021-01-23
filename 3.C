#include<stdio.h>
#include<conio.h>
main()
{
int start, choice;
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Lowercase\n");
for(start=97;start<=122;start++)
printf("%c",start);
break;
case 2:
printf("Uppercase\n");
for(start=65;start<=90;start++)
printf("%c",start);
break;
case 3:
printf("Special character\n");
for(start=1;start<=48;start++)
printf("%c",start);
break;
}
//}while(choice<4);
getch();
}

