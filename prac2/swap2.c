/* Q)Write a program in C to accept 2 numbers from the user and perform the swapping 
of 2 numbers using 2 variables.*/

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping, numbers are %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, numbers are %d and %d",a,b);
    return 0;
}