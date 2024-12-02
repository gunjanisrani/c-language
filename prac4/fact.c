/* Q] Write a program in C to accept a number from user and print factorial of that number. */


#include<stdio.h>
int main(){
    int a,fact=1;
    printf("Enter a number");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("Factorial is %d",fact);
return 0;
}
