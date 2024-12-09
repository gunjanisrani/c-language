/* Q)Write a program in C to accept 2 numbers from the user and perform the swapping
 of 2 numbers using 3 variables.*/

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter 1st number\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);
    printf("Before swapping, numbers are %d and %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping, numbers are %d and %d",a,b);
    return 0;
}