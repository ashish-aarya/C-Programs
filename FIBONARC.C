#include <conio.h>
#include <stdio.h>
void main()
{

//fibonarcy series
int a=0,b=1,sum=0,n,i;
clrscr();
printf ("SERIES");
scanf ("%d",&n);
printf("\n%d, %d",a,b);
for (i=3;i<=n;i++)
{sum=a+b;
 printf (", %d",sum);
 a=b;
 b=sum;

}
printf(". \n\n Ashish Arya  43513203118") ;

getch();


}