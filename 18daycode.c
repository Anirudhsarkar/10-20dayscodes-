#include <stdio.h>

//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
int main (){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(a%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}