#include <stdio.h>
//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
int main (){
    int a;
    int product = 1;
    printf("Enter n :");
    scanf("%d",&a);
    for(int i=2;i<=a;i += 2){
        product *= i;
    

    }
    printf(":%d",product);
    
    return 0;



}