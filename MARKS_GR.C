#include <stdio.h>
#include <conio.h>
void main()
{ int m1,m2,m3,m4,m5,avg;
   clrscr();
   printf("\nENTER THE Marks of sub 1=");
   scanf("%d",&m1);
    printf("\nENTER THE Marks of sub 2=");
   scanf("%d",&m2);
    printf("\nENTER THE Marks of sub 3=");
   scanf("%d",&m3);
    printf("\nENTER THE Marks of sub 4=");
   scanf("%d",&m4);
    printf("\nENTER THE Marks of sub 5=");
   scanf("%d",&m5);
   avg=(m1+m2+m3+m4+m5)/5;
   printf ("Ag%d",avg);
   if(avg<=100 &&avg>=85)
   printf ("\n GRADE A");
    if(avg<85 &&avg>=65)
   printf ("\n GRADE B");
    if(avg<65 &&avg>=50)
   printf ("\n GRADE C");
    if(avg<50 &&avg>=40)
   printf ("\n GRADE D");
    if(avg<40)
   printf ("\n GRADE E");
   printf ("\n\n Ashish Arya     43513203118");
   getch();
   }