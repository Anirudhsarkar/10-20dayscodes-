#include <stdio.h>
//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
int main (){
    int an,di;
    int product =1;
    int odd = 0;
    printf("Enter the digit:");
    scanf("%d",&an);
    for ( ;an !=0;an /=10){
        di = an %10;
        if(di %2 != 0 ){
            product *= di;
            odd = 1;
        }
    }
    printf("the product of odd digit is %d",product);
    return 0;
}