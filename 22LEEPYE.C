#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter year no "); scanf("%d",&n);
if(n%4==0 &&n%100!=0 || n%400==0)
puts("Leep year");
else
puts("Common Year");
getch();
}