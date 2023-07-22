#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter a, b values ");
scanf("%d %d",&a, &b);
if(a>b)printf("a is Big");
else if(b>a)printf("b is Big");
else printf("Both are equal");
getch();
}