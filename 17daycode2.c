#include <stdio.h>

//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/


int main() {
    int a, i, isPrime = 1;

    printf("Enter number: ");
    scanf("%d", &a);

    if (a <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number\n", a);
    else
        printf("%d is not a prime number\n", a);

    return 0;
}
