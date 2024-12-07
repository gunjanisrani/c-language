/* Q.2) Write a program in C to create a function to perform swapping of 2 numbers using
pointers. */

#include<stdio.h>
void swap(int*,int*);
int main(){
    int a,b;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping, first number is %d and second number is %d",a,b);
    return 0;
}

void swap(int *x,int *y){
    int temp;
    temp= *x;
    *x= *y;
    *y= temp;  
}