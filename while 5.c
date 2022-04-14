/*Read an integer value a and print the 6 consecutive odd numbers from a,only
 a value per line, including a if it is the case.*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("input a number = \n");
    scanf("%d",&a);

    if(a%2!=0)
    {
        for(b=a; b<=(a+10); b=b+2)
        {
            printf("%d\n",b);
        }
    }
    else
    {

        for( b=a+1; b<=(a+12); b=b+2)
        {
            printf("%d\n",b);
        }

    }
    return 0;

}

