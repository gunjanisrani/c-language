/* Q) Write a program in c to accept 2 floating point numbers and perform addition,
subtraction,multiplication and division. */

#include<stdio.h>
int main(){
    float a,b;
    printf("Enter 2 numbers\n");
    scanf("%f%f",&a,&b);
    printf(" Addition is %f\n Subtraction is %f\n Multiplication is %f\n Division is %f\n",(a+b),(a-b),(a*b),(a/b));
return 0;
}
