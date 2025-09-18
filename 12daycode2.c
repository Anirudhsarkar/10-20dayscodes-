#include <stdio.h>
//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
int main (){
    int x,y,k,l;
    scanf("%d",&x);
    if(x<=100){
        printf("Bill: ₹%d",x*5);
    }
    else if(x>100 && x<=200){
        y= 500;
        printf("Bill :₹%d",y+((x-100)*7));
    } 
    else if (x>200 && x<=300){
        k= 500+700;
        printf("Bill:₹%d ",k+((x-200)*10));

    }
    else {
        l= 500+700+1000;
        printf("Bill:₹%d",l+((x-300)*12) );

    }
    return 0;

}

