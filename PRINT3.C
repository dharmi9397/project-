#include <stdio.h>
#include <conio.h>
main()
{
 int x=1;
 int n;
 clrscr();
 printf("enter a value of :-");
 scanf("%d",&n);
 while(x<=n){
  if(x%2==1){
   printf("%d",x);
   }
   x++;
 }
  getch();
}