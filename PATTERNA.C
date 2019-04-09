#include <stdio.h>
#include <conio.h>
void main()
{
int n,c=0,i=1,j=1,vl=9,sn=-1;;
clrscr();
printf("TERM");
scanf ("%d",&n);
for (i=n;i>=1;i--)
{  printf("\n");
vl=9;c++;
sn+=2;
for( j=1;j<=i;j++)
{if (c%2!=0)
{printf("%d",vl);
vl--;}
else
printf("%d",c-1);
}
}
printf("\n  Ashish Arya 43513203118");
getch();
}
