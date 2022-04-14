//2.Write a program that will take marks of n students and print the average mark. number of students(n) and the marks will be taken from user
#include<stdio.h>
int main()
{
    int s[100],sum=0,i,n;
    printf("Enter number of student");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0; i<n; i++)
    {

        sum+=s[i];
    }
    printf("Sum : %d\n",sum);
    printf("Average: %.2f",(float)sum/n);
}


