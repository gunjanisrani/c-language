/* Write a program in C to create a function with no returntype and with parameter to
print fibonacci series. */

#include<stdio.h>
void fib(int);
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    fib(n);
}

void fib(int n){
    int t1=0,t2=1,next;
    printf("0\t1\t");
    for(int i=1;i<=n-2;i++){
        next=t1+t2;
        t1=t2;
        t2=next;
        printf("%d\t",t2);
    }
}