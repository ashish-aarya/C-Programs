#include <stdio.h>
#include <conio.h>
void main()
{ int t,t1,n;
  clrscr();
  printf ("\n Enter your choice:");
  printf ("\n 1) Convert Centigrade to Fahrenheit");
  printf ("\n 2) Convert Fahrenheit to Centigrade");
  scanf  ("%d",&n);
  if(n==1)
  {
  printf("\n Enter the temp in centigrade");
  scanf ("%d",&t);
  t1=t*1.8+32;
  printf ("\n Temp in Fahrenheit is: %d",t1);
  }
  else  if(n==2)
  {
  printf("\n Enter the temp in Fahrenheit ");
  scanf ("%d",&t);
  t1=(t-32)*(5/9);
  printf ("\n Temp in Centigrade is: %d",t1);
  }
  else
  printf("\n INVALID OPTION");
  printf("\n Ashish Arya  43513203118    ");

getch();
}