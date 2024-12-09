/* Q)Write a program in c to  accept a number from the user and check whether it is positive, 
negative or zero, use else if ladder. */

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0)
    printf("%d is positive",a);
    else if(a<0)
    printf("%d is negative",a);
    else
    printf("%d is zero",a);
    return 0;
}