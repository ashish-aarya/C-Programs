#include <stdio.h>
#include <conio.h>
void main()
{
int n,i,j;
clrscr();
printf("TERM");
scanf ("%d",&n);
for (i=1;i<=n;i++)
{  char ch='A';
for( j=1;j<=i;j++)
{printf("%c",ch);
ch++;}
printf("\n");
}
printf("\n  Ashish Arya 43513203118");
getch();
}
