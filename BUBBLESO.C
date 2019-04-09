#include <stdio.h>
#include <conio.h>
void main ()
{
   int n,i,j,temp;
   int ar[50];
   clrscr();
   printf ("Enter the term");
   scanf ("%d",&n);
   for (i=0;i<n;i++)
   scanf("%d",&ar[i]);

    //BubbleSort
    temp=0;
    for (i=0;i<n;i++)
    {
       for (j=0;j<n-1;j++)
       {
	 if(ar[j]<ar[j+1])
	   { temp=ar[j];
	   ar[j]=ar[j+1];
	    ar[j+1]=ar[j];
	}

}
}
  for (i=0;i<n;i++)
   printf("%d",ar[i]);

   getch();
}