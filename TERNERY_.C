#include <stdio.h>
#include <conio.h>
void main () {
int a,b,no;
clrscr();
printf ("\nEnter the number");
scanf ("%d",&a);
scanf ("%d",&b);
no=a>b?a:b;
printf ("Greater no.=%d",no);
getch();
}
