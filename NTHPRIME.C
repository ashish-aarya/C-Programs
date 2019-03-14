#include <conio.h>
#include <stdio.h>
void main()
{// nth prime
int n,count=0,i,j;
clrscr();
printf("Enter the Num") ;
scanf ("%d",&n);
for (i=1;i<=n;i++)
{count =0;
for (j=1;j<=i;j++)
{
 if (i%j==0)
 count++;
 }
 if (count==2)
 printf("  %d",i);
 }
 printf("\n\n Ashish Arya    43513203118 " );
 getch();

}