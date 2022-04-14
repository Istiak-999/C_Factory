/*Write a program that reads an integer N.
N * 2 lines must be printed by this program according to the example below.
For numbers with more than 6 digits, all digits must be printed*/

#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        c=b*b;
        d=b*b*b;
        printf("%d %d %d\n",b,c,d);
        e=c+1;
        f=d+1;
        printf("%d %d %d\n",b,e,f);
    }
    return 0;
}
