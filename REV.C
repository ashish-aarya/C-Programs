#include <stdio.h>
#include <conio.h>
void main ()
  {
    int n,a,b,c,rev;
     printf ("Enter the Number");
     scanf ("%d",&n);
     a=n/100;
     b=(n/10)%10;
     c=(n%10);
     printf ("\n 1= %d" ,a);
     printf ("\n 2= %d" ,b);
     printf ("\n 3= %d" ,c);
     rev=c*100+b*10+a;
     printf ("\n rev=%d",rev);
     getch();

}