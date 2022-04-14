//Take a input n where n>0. Now print  all the odd numbers between 0 to n using while loop.

#include <stdio.h>

int main()
{
    int n, i=1;

   printf("input a number=");
   scanf("%d",&n);
   if(n>0)
   {
      while(i<=n)
      {
          printf("%d\n",i);
          i=i+2;

      }
   }
   else
    printf("enter a valid number");
   return 0;
}
