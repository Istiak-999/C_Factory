/*I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0*/
#include <stdio.h>
int main()
{
    int i=1,j;
    for(j=60;j>=0;j=j-5)
    {

            printf("I=%d  J=%d\n",i,j);
            i=i+3;

    }
}

