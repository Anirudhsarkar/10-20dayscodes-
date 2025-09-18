#include <stdio.h>
//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
int main (){
    int x,y,re;
    char sign ;
    printf("Enter sign:\n");
    scanf("%c",&sign);
    printf("Enter num :");
    scanf("%d",&x);
    printf("Enter num2:");
    scanf("%d",&y);
    
    switch(sign){
        case '+':
        re = x+y;
        printf("%d",re);
        break;
        case '-':
        re = x-y;
        printf("%d",re);
        break;
        case '*':
        re = x*y;
        printf("%d",re);
        break;
        case '/':
        re = x/y;
        printf("%d",re);
        break;
    
    }
    return 0;


}

