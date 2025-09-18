#include <stdio.h>
//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    long  num, temp, result = 0;
    int digit, digits = 0;
    long place;

    
    printf("Enter a binary number: ");
    scanf("%ld", &num);

   
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    
    place = 1;
    for (int i = 0; i < digits; i++) {
        digit =num % 10;   

        if (digit == 0)
            result+= 1 * place;   
        else if (digit == 1)
            result+= 0* place;   
        else {
            printf("Invalid input! Only 0 and 1 are allowed.\n");
            return 1;
        }

        num /= 10;       
        place *= 10;    
    }

    
    printf("1's complement = %ld\n", result);

    return 0;
}
