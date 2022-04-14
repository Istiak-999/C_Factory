/*Write a program that keeps reading a password until it is valid. For each wrong password read,
write the message "Don't copy other answers".When the password is typed correctly print the message
 "God Bless you, Stay safe" and finished the program.
 The correct password is the number 2020.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter your password");
    scanf("%d",&n);
    if(n==2020)
    {
        printf("God Bless you, Stay safe");
    }
    else
    {
        printf("Don't copy other answers");
    }
    return 0;
}
