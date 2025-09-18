#include <stdio.h>
//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
void binary(int num ){
    if(num >1){
        binary(num/2);   
    }
    printf("%d",num%2);

}
int main(){
    int numb;
    printf("Enter the number ");
    scanf("%d",&numb);
    if(numb == 0){
        printf("Binary is :0\n");
        return 0;

    }
    else{
        printf("Binary: ");
        binary(numb);
        printf("\n");
 
        

    }
    return 0;








}