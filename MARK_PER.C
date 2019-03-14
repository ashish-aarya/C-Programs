#include <stdio.h>
#include <conio.h>
void main()
{ int m1,m2,m3,m4,m5,total,Perc;
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
   total=(m1+m2+m3+m4+m5);
   printf ("\n  Total %d",total);
   Perc=total/5;
printf ("\n Percentage %d",Perc);
printf ("\n\n Ashish Arya     40813203118");
   getch();
   }