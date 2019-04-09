#include <stdio.h>
#include <conio.h>
void main ()
{
int n,x,i,j;
double fact,sum,sum2;
clrscr();
printf("Enter the no term");
scanf ("%d",&n);
printf ("Enter the x");
scanf("%d",&x);
fact=1.0;
sum=0.0;
//sum2=0.0;
for (i=1;i<=n;i+=2)
{
for (j=1;j<=i;j++)
{
fact*=j;
printf("%d",fact);
}sum+=x/fact;
//sum2+=sum;
printf("%f +",sum);
//sum=0.0;
   }
// printf ("=%f",sum2);
   printf("\n Ashish Arya   43513203118");
   getch();
}