#include <stdio.h>
#include <conio.h>
void main()
{
int n;
clrscr();
printf("TERM");
scanf ("%d",&n);
for (int i=1;i<=n;i++)
{  char ch='A';
for(int j=1;j<=i;j++)
{printf("%c",ch);
ch++;}
printf("\n");
}
getch();
}