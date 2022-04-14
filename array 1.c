//1.Write a program using array which will show the maximum and minimum number of a given array [24, 12, 45, 76, 02, 33]
#include <stdio.h>
int main()
{
    int a[6]= {24, 12, 45, 76, 2, 33},i,n,min,max;

    min=max=a[0];
    for(i=1; i<7; i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("minimum of array is : %d",min);
    printf("\n maximum of array is : %d",max);


    return 0;
}
