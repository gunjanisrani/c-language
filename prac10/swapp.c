/* Q.2) Write a program in C to create a function to perform swapping of 2 numbers using
pointers. */

#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    swap(&a,&b);
}

void swap(int a,int b){
    int a,b;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    int *ptr=&a;
    int *ptr2=&b;
    a=(*ptr)+(*ptr2);
    b=(*ptr)-(*ptr2);
    a=(*ptr)-(*ptr2);
    printf("After swapping first number is %d and second number is %d",a,b);
    
}