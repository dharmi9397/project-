#include <stdio.h>
#include <conio.h>
main()
{
 int x=1;
 int n;
 clrscr();
 printf("enter a value of :-");
 scanf("%d",&n);
 do{
  if(x%2==0){
  printf("%d",x);
  }
  x++;
  }while(x<=n);
    getch();
   }