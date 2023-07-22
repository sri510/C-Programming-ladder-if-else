#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a Number:");
scanf("%d",&n);
if((n&1)==0)puts("Even");
else
puts("Odd");
getch();
}