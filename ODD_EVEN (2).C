#include <stdio.h>
#include <conio.h>
void main ()
{
int n;
clrscr();
printf ("\n ENTER THE NO TO CHECK IF ITS ODD AOR EVEN");
scanf ("%d",&n);
if (n<=0)
printf("\n INVALID INPUT");
else
 if (n%2==0)
 printf ("\n Even");
 else
 printf ("\n Odd");
 getch();
 }