#include <stdio.h>
#include <conio.h>
void main()
{
 int n,i=1,j=1;
 clrscr();
 printf("Enter The term");
 scanf ("%d",&n);
 for(i=1;i<=n;i++)
 { char ch='A';
 printf("\n");
 for ( j=1;j<=i;j++)
 {
    printf("%c",ch);
    ch++;
}
}
printf("\n ANANT	40413203118");
getch();
}