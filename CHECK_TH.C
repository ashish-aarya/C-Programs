#include <stdio.h>
#include <conio.h>
void main()
{
char ch;
clrscr();
printf("\n Enter the Character");
scanf ("%c",&ch);
if (ch>='A'&& ch<='Z')
printf ("\n UPPERCASE");
else if (ch>='a' && ch<='z')
printf ("\n LOWERCASE");
else if (ch>='0' && ch<='9')
printf("\n NUMBERS");
else
printf ("Special Symbols");
printf ("\n \n  Ashish Arya    43513203118");
getch();

}