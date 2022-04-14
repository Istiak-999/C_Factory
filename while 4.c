//Take a input n. now print the sum of the next 5 consecutive numbers including n.

#include <stdio.h>
int main()
{
    int n,x,a,r=0;
    printf("input a number=");
    scanf("%d",&n);
    x=n+5;
    while(n<=x)
   {

 r=r+n;
    n++;

   }
printf("Sum is %d \n",r);
    return 0;
}
