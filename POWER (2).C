#inlclude <conio.h>
#include <stdio.h>
void main(){
//power
int n,p,power=1;
printf ("Enter the no");
scanf ("%d",&n);
printf("enter the power");
scanf ("%d",&p);
for (int i=1;i<=p;i++ )
{
power*=n;
}
printf ("\n Power of the value is %d",power);
printf ("\n Ashish Arya      4313203118");
getch();
}