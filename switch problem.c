//Read an integer number between 1 and 12, including. Corresponding to this number, you must print the month of the year, in Bangla.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number between 1 to 12=");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
    printf("Baishakh");
    break;
    case 2:
    printf("Joiustho");
    break;
    case 3:
    printf("Asher");
    break;
    case 4:
    printf("Shrabon");
    break;
    case 5:
    printf("Bhadra");
    break;
    case 6:
    printf("Ashwin");
    break;
    case 7:
    printf("Kartik");
    break;
    case 8:
    printf("Aggrahayon");
    break;
    case 9:
    printf("Powsh");
    break;
    case 10:
    printf("Magh");
    break;
    case 11:
    printf("FalgunS");
    break;
    case 12:
    printf("Chaityra");
    break;
    default:
        printf("Enter a valid number");
    }


    return 0;
}
