#include<stdio.h>
#include<conio.h>
main()
{
    int i=1,n,c=0;
    clrscr();
    printf("Enter value:");
    scanf("%d",&n);
    while(n!=0){
       n=n/10;
       c++;
    }
     printf("%d",c);
     getch();
}