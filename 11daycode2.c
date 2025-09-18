#include <stdio.h>

//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
int main (){
    float a,b,c,d;
    printf(":\n");
    scanf("%f %f",&a,&b);
    if(a<b){
        c = (b-a)/a;
        printf("profit of %f ",c*100);
    }
    else if(b<a){
        d = (a-b)/a;

        printf("loss of %f",d*100);

    }
    else {
        printf("No Profit No Loss");

    }


    
        

    
    return 0;

     
}