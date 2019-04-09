#include < stdio>
#include <conio>
void main ()
{ //Disto BIn
int n,ans=0,mul=1;
clrscr();
printf ("Enter");
scanf("%d",&n);
//int ans=0;
//int mul=1 ;
while (n!=0)
{
 int rem=n%2;
 n=n/2;
 ans= ans+(rem*mul);
 mul=mul*10;
}
printf("Answer %d",ans);
printf("\n\n Ashish Arya       43513203118");
getch();
}
