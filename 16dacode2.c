#include <stdio.h>
//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;   
    
    while (num != 0) {
        remainder = num % 10;                   
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;                              
    }

    // Check if palindrome
    if (originalNum == reversedNum)
        printf("%d is a palindrome number.\n", originalNum);
    else
        printf("%d is not a palindrome number.\n", originalNum);

    return 0;
}

