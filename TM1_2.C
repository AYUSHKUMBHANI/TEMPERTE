#include<stdio.h>
#include<conio.h>
main()
{
   int i=1,n;
   clrscr();
   printf("Enter value :");
   scanf("%d",&n);
   while(i<=10){
   printf("%d*%d=%d\n",n,i,i*n);
   i++;
   }
     getch();
     }
