#include<stdio.h>
#include <conio.h>
int main()
{
char ch;
scanf ("%c",&ch);
//int n=(int)ch;
 if ((int)ch>=97 && (int)ch<=122)
 {  (int)ch=ch-32;
 printf("%c",ch);
}
else if ((int)ch>=65 && (int)ch<=90)
 {  (int)ch+=32;
 printf("%c",ch);
}
return 0;
getch();
}
