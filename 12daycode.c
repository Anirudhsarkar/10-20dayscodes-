#include <stdio.h>
//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
int main (){
    int x;
    scanf("%d",&x);
    if(x<=5){
        printf("Fine ₹%d ",x*2);
    }
    else if(x<=10 && x>5){
        printf("Fine ₹%d",x*4);


    }
    else if (x>10 && x<=30){
        printf("Fine ₹%d",x*6);

    }
            else {
            printf("Membership Cancelled");
            }
            return 0;
            
             
}