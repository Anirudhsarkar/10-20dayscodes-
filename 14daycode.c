#include <stdio.h>
//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
int main (){
    int a;
    int sum = 0;
    printf("Enter n :");
    scanf("%d",&a);
    for(int i=1;i<=2*a;i += 2){
        sum += i;
    

    }
    printf(":%d",sum);
    
    return 0;



}