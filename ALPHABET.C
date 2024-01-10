#include <stdio.h>
#include <conio.h>
main()
{
 int nine='a';
 clrscr();
 printf("alphabets\n");
 do{
  printf("%c\n",nine);
  nine+=4;
  }while(nine<='z');
  getch();
}