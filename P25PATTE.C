#include <stdio.h>
#include <conio.h>
void main()
{
 int n,i=1,j=1;
 clrscr();
 printf("Enter The term");
 scanf ("%d",&n);
 for(i=n;i>=1;i++)
 {
 printf("\n");
 for ( j=i;j>=1;j--)
 {
    printf("%d",j);
}
}
getch();
}