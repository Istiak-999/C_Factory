 #include <stdio.h>
int main()
{
 int i=1,n,sum=0;
    printf("Enter any number = ");
    scanf("%d",&n);
    do{sum+=i;
        ++i;
    }while(i<=n);
printf("sum = %d",sum);
}
