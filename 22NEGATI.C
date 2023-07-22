#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a no. ");
scanf("%d",&n);
if(n<0)puts("-Ve");
else
if(n>0)
puts("+Ve");
else
puts("Zero");
getch();
}