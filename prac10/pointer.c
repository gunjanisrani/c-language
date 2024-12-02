/* Q.1) Write a program in C to accept 2 integer numbers from the user to perform addition,
subtraction and multiplication of 2 numbers using pointers. */

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    int *ptr=&a;
    int *ptr2=&b;
    printf("Addition is %d\n",(*ptr)+(*ptr2));
    printf("Subtraction is %d\n",(*ptr)-(*ptr2));
    printf("Multiplication is %d\n",(*ptr)*(*ptr2));
    return 0;
}