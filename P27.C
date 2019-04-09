#include <stdio.h>
#include <conio.h>
void main()
{
int n,i=1,st=1,nst,sp=1,nsp=0;
char ch='A';
clrscr();
printf("TERM");
scanf ("%d",&n);
nst=n;
for (i=1;i<=n;i++)
{  printf("\n");
ch='A';
for( st=1;st<nst;st++)
{printf("%c",ch);
ch++;
}
nst--;
for (sp=1;sp<=nsp;sp++ )
printf(" ");
nsp+=2;

for(;st>=1;st--)
{ch--;
 printf("%c",ch);

 }
}

printf("\n  Ashish Arya 43513203118");
getch();
}
