/* Q) Write a program in C to create function with no return and with parameter to 
perform swapping of 2 numbers using three variables. */

#include<stdio.h>
void swap(int,int);
int main(){
    int a,b;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("After swapping, first number is %d and second number is %d",x,y);
}