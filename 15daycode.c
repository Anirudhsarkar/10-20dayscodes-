#include <stdio.h>
//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
int main (){
    int a;
    int fact=1;
    printf("Enter number x ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        fact  = fact*i;
    
    }
    printf("the factorial is %d",fact);
    return 0;
}
