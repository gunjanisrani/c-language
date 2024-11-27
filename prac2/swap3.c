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