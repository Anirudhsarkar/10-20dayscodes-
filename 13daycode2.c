#include <stdio.h>
//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
int main(){
    int a;
    printf("enter x:");
    scanf("%d",&a);

    for(int i=1 ; i<=a;i++){
        printf("%d\n",i);
    }
    return 0;
}