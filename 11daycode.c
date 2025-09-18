#include <stdio.h>
//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
int main(){
    int a;
    printf("enter month ");
    scanf("%d",&a);
    switch (a){


        case 1:
       printf("January, 31days\n");
        break;

        case 2:
        printf("Februray , 28days\n");
        break;
        case 3:
        printf("March ,31days \n");
        break;
        case 4:
        printf("April , 30days\n ");
        break;
        case 5:
        printf("May , 31days \n  ");
        break;
        case 6:
        printf("June , 30days\n ");
        break;
        case 7:
        printf("July  , 31days\n ");
        break;
        case 8:
        printf("August , 31days\n ");
        break;
        case 9:
        printf("September , 30days\n ");
        break;
        case 10:
        printf("October, 31days\n ");
        break;
        case 11:
        printf("November , 30days\n ");
        break;
        case 12:
        printf("December , 31days\n ");
        break;
    }
    return 0;


}