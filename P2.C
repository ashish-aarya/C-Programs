#include <stdio.h>
#include <conio.h>
void main()
{
int n;
clrscr();
printf("TERM");
scanf ("%d",&n);
int nsp=n-1;
for (int i=1;i<=n;i++)
{for (int sp=1;sp<=nsp;sp++)
printf(" ")
 char ch='A';
for(int j=1;j<=i;j++)
{printf("%c",ch);
ch++;}
nsp--;
printf("\n");
}
getch();
}