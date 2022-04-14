#include <stdio.h>
int main()
{
    int a=4,n=0,b,c;

    for(b=1; b<=a; b++)
    {
        for(c=1; c<=b; c++)
        {
            n++;
            printf("%d ",n);
        }
        printf("\n");
        printf("\n");
    }
}

